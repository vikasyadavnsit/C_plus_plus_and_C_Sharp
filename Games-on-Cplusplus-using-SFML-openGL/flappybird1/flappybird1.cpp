#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
using namespace std;
typedef int __c_c;
__c_c ___speed=0;

int main()
{
    startgame :
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(1000, 600), "Flappy Bird",sf::Style::Default,settings); //sf::Style::Fullscreen

    srand(time(NULL));
    __c_c rlength[4]={0},_rloop[4]={1100,1400,1700,2000},_rpoint=1100;
    __c_c xpos=200,ypos=250;
    int ycounter=0,score=0;
    bool _notout=true,retry_w=true;
    for(__c_c i=0;i<4;i++)
      rlength[i]=rand()%300;

    sf::Music music;
    if (!music.openFromFile("sound.wav"))
      cout<<"failed to load audio";
    music.play();

    while (window.isOpen())
    {
/*       sf::Texture texture;
       texture.loadFromFile("cloud.jpg");
       sf::Sprite sprite;
      // sprite.setPosition(0,300);
       sprite.setTexture(texture);
*/

      // set1 of rectanlges
      sf::RectangleShape R(sf::Vector2f(80,rlength[0]+100) );
      R.setPosition(_rloop[0],0);
      R.setFillColor(sf::Color::Green);

      sf::RectangleShape R2(sf::Vector2f(80,-(320-rlength[0])) );
      R2.setPosition(_rloop[0],600);
      R2.setFillColor(sf::Color::Green);
      --_rloop[0];

      if(_rloop[0]<-90)
       {
          _rloop[0]=_rpoint;
          rlength[0]=rand()%300;
          ++score;
       }

      // set2 of rectanlges
      sf::RectangleShape R3(sf::Vector2f(80,rlength[1]+100) );
      R3.setPosition(_rloop[1],0);
      R3.setFillColor(sf::Color::Green);

      sf::RectangleShape R4(sf::Vector2f(80,-(320-rlength[1])) );
      R4.setPosition(_rloop[1],600);
      R4.setFillColor(sf::Color::Green);
      --_rloop[1];

      if(_rloop[1]<-90)
       {
          _rloop[1]=_rpoint;
          rlength[1]=rand()%300;
          ++score;
       }

      // set3 of rectanlges
      sf::RectangleShape R5(sf::Vector2f(80,rlength[2]+100) );
      R5.setPosition(_rloop[2],0);
      R5.setFillColor(sf::Color::Green);

      sf::RectangleShape R6(sf::Vector2f(80,-(320-rlength[2])) );
      R6.setPosition(_rloop[2],600);
      R6.setFillColor(sf::Color::Green);
      --_rloop[2];

      if(_rloop[2]<-90 )
       {
          _rloop[2]=_rpoint;
          rlength[2]=rand()%300;
          ++score;
       }

      // set4 of rectanlges
      sf::RectangleShape R7(sf::Vector2f(80,rlength[3]+100) );
      R7.setPosition(_rloop[3],0);
      R7.setFillColor(sf::Color::Green);

      sf::RectangleShape R8(sf::Vector2f(80,-(320-rlength[3])) );
      R8.setPosition(_rloop[3],600);
      R8.setFillColor(sf::Color::Green);
      --_rloop[3];

      if(_rloop[3]<-90 )
       {
          _rloop[3]=_rpoint;
          rlength[3]=rand()%300;
          ++score;
       }

       ycounter++;
       if(ycounter>3)
         ypos+=1,ycounter=0;

      // object bird
      sf::RectangleShape bird(sf::Vector2f(30,30));
      bird.setPosition(xpos,ypos);
      bird.setFillColor(sf::Color::Red);


      // collision upper pipe
      if((bird.getPosition().x + bird.getLocalBounds().width  > R.getPosition().x ) && (bird.getPosition().x + bird.getLocalBounds().width  < R.getPosition().x + R.getLocalBounds().width))
        if((bird.getPosition().y + bird.getLocalBounds().height < R.getPosition().y + R.getLocalBounds().height ))
           _notout=false;
      if((bird.getPosition().x + bird.getLocalBounds().width  > R3.getPosition().x ) && (bird.getPosition().x + bird.getLocalBounds().width  < R3.getPosition().x + R3.getLocalBounds().width))
        if((bird.getPosition().y + bird.getLocalBounds().height < R3.getPosition().y + R3.getLocalBounds().height ))
           _notout=false;
      if((bird.getPosition().x + bird.getLocalBounds().width  > R5.getPosition().x ) && (bird.getPosition().x + bird.getLocalBounds().width  < R5.getPosition().x + R5.getLocalBounds().width))
        if((bird.getPosition().y + bird.getLocalBounds().height < R5.getPosition().y + R5.getLocalBounds().height ))
           _notout=false;
      if((bird.getPosition().x + bird.getLocalBounds().width  > R7.getPosition().x ) && (bird.getPosition().x + bird.getLocalBounds().width  < R7.getPosition().x + R7.getLocalBounds().width))
        if((bird.getPosition().y + bird.getLocalBounds().height < R7.getPosition().y + R7.getLocalBounds().height ))
           _notout=false;

     // collision lower pipe
      if((bird.getPosition().x + bird.getLocalBounds().width  > R2.getPosition().x ) && (bird.getPosition().x + bird.getLocalBounds().width  < R2.getPosition().x + R2.getLocalBounds().width))
        if(bird.getPosition().y + bird.getLocalBounds().height > R2.getPosition().y - R2.getLocalBounds().height)
          _notout=false;
      if((bird.getPosition().x + bird.getLocalBounds().width  > R4.getPosition().x ) && (bird.getPosition().x + bird.getLocalBounds().width  < R4.getPosition().x + R4.getLocalBounds().width))
        if(bird.getPosition().y + bird.getLocalBounds().height > R4.getPosition().y - R4.getLocalBounds().height)
          _notout=false;
      if((bird.getPosition().x + bird.getLocalBounds().width  > R6.getPosition().x ) && (bird.getPosition().x + bird.getLocalBounds().width  < R6.getPosition().x + R6.getLocalBounds().width))
        if(bird.getPosition().y + bird.getLocalBounds().height > R6.getPosition().y - R6.getLocalBounds().height)
          _notout=false;
      if((bird.getPosition().x + bird.getLocalBounds().width  > R8.getPosition().x ) && (bird.getPosition().x + bird.getLocalBounds().width  < R8.getPosition().x + R8.getLocalBounds().width))
        if(bird.getPosition().y + bird.getLocalBounds().height > R8.getPosition().y - R8.getLocalBounds().height)
          _notout=false;


      sf::sleep(sf::milliseconds(___speed));

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
               {
                 music.stop();
                 window.close();
               }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
               {
                 music.stop();
                 window.close();
               }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
               ypos-=45;
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
               ypos+=45;
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
               xpos-=30;
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
               xpos+=30;
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::R))
               goto startgame;

        }

        if(ypos<0)
           ypos=0;
        if(ypos>570)
           ypos=570;
        if(xpos<0)
           xpos=0;
        if(xpos>970)
           xpos=970;

      sf::Text text,text2;
      sf::Font font;
      if(!font.loadFromFile("font.ttf"))
        cout<<"error";
      text.setFont(font);
      text.setString("SCORE");
      text.setPosition(700,-15);
      text.setCharacterSize(50);

      text2.setFont(font);
      std::stringstream ss;
      ss<<score;
      text2.setString(ss.str().c_str());
      text2.setPosition(900,-15);
      text2.setCharacterSize(50);


    if(_notout)
    {
        window.clear();
  //      window.draw(sprite);
     //   window.setFramerateLimit(300);
        window.draw(R);
        window.draw(R2);
        window.draw(R3);
        window.draw(R4);
        window.draw(R5);
        window.draw(R6);
        window.draw(R7);
        window.draw(R8);
        window.draw(bird);
        window.draw(text);
        window.draw(text2);
        window.display();
    }
    if(!_notout && retry_w==true )
     {
        music.stop();
      sf::Text retry,esc;
      retry.setFont(font);
      retry.setString("R FOR RETRY");
      retry.setPosition(window.getSize().x/2-250,window.getSize().y/2-100);
      retry.setCharacterSize(70);

      esc.setFont(font);
      esc.setString("ESC TO EXIT");
      esc.setPosition(window.getSize().x/2-250,window.getSize().y/2+50);
      esc.setCharacterSize(70);
      window.draw(retry);
      window.draw(esc);
      window.display();
      retry_w=false;
     }
  }

    return 0;
}


