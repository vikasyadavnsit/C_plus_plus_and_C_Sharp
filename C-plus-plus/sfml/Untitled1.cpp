#include <SFML/Graphics.hpp>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int i=1,j=0,k=0;bool s=true;
    sf::RenderWindow window(sf::VideoMode(400, 400), "MrExclusive");

     srand(time(NULL));
     int rndd=rand()%100+30;

    while (window.isOpen())
    {


        sf::CircleShape shape(i);
        sf::CircleShape shape1(200-i);


        shape.setFillColor(sf::Color::Red);
        shape1.setFillColor(sf::Color::Green);

         if(i==200 || i==0)
           s=!s,rndd=rand()%230+25;
         if(s==1)
           i++;
          else
            i--;

         sf::Time t1 = sf::seconds(0.01f);
         sf::sleep(t1);

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(shape1);
        window.display();
    }

    return 0;
}
