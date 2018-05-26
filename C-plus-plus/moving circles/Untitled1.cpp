#include <SFML/Graphics.hpp>
#include <windows.h>
#include <iostream>
#include <vector>


using namespace std;

    int width = GetSystemMetrics(SM_CXSCREEN); // Get the Screen-Width
    int height =  GetSystemMetrics(SM_CYSCREEN); //Get the Screen-Height
        int ballradius = 50;
    vector <float> xSpeed{53.4f, 71.7f, 76.7f, 72.5f, 76.1f, 46.1f, 74.4f, 75.6f, 53.2f, 51.8f}; // Well, I dont know if thats very clever...
    vector <float> ySpeed{77.9f, 70.9f, 70.9f, 17.9f, 50.9f, 19.2f, 73.6f, 73.5f, 60.1f, 63.9f};

    bool RightBorderTouching(int TempPositionX)         // Yep, I know that you can do this shorter, but I like 'comprehensive' code.
    {
    int RightBorderPosition = TempPositionX + ballradius * 2;
    if(RightBorderPosition >= width){return true;}
    if(RightBorderPosition < width){return false;}
    }

    bool LeftBorderTouching(int TempPositionX)
    {
    int LeftBorderPosition = TempPositionX;
    if(LeftBorderPosition <= 0){return true;}
    if(LeftBorderPosition > 0){return false;}
    }

    bool TopBorderTouching(int TempPositionY)
    {
    int TopBorderPosition = TempPositionY;
    if(TopBorderPosition <= 0){return true;}
    if(TopBorderPosition > 0){return false;}
    }

    bool BottomBorderTouching(int TempPositionY)
    {
    int BottomBorderPosition = TempPositionY + ballradius * 2;
    if(BottomBorderPosition >= height){return true;}
    if(BottomBorderPosition < height){return false;}
    }

int main()

{

cout << "Width: " << width << endl;
cout << "Height: " << height << endl;

vector <sf::CircleShape> Ball(10); // Should I make the Balls within a vector or separately?
    for(int i = 0; i < 10; i++  )
    {
        Ball[i].setRadius(ballradius);
        Ball[i].setPointCount(100);
        Ball[i].setFillColor(sf::Color(34 , 186 , 186 ));
        Ball[i].setOutlineThickness(5);
        Ball[i].setOutlineColor(sf::Color(88, 97, 97));
        Ball[i].setPosition( 245 , 245);
    }

     sf::Clock clock;

     sf::ContextSettings settings;
     settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode(width-20, height-20), "Bouncing Balls", sf::Style::Fullscreen, settings);

    window.setVerticalSyncEnabled(true);



    while (window.isOpen())
    {



        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed)
{

    if (event.key.code == sf::Keyboard::Escape)
    {
        window.close();
    }
}


        }

        auto  dt = clock.restart().asSeconds();
        window.clear(sf::Color::White);
        for(int i = 0; i < 10; i++  )

    {
       Ball[i].move(xSpeed[i] * dt, ySpeed[i] * dt );

    }

        for(int i = 0; i < 10; i++  )
    {
        window.draw(Ball[i]);
    }

        window.display();

for(int i = 0; i < 10; i++  )
    {
        if(RightBorderTouching(Ball[i].getPosition().x)) {xSpeed[i] = -xSpeed[i];}
        if(LeftBorderTouching(Ball[i].getPosition().x)) {xSpeed[i] = -xSpeed[i];}
        if(TopBorderTouching(Ball[i].getPosition().y)) {ySpeed[i] = -ySpeed[i];}
        if(BottomBorderTouching(Ball[i].getPosition().y)){ySpeed[i] = -ySpeed[i];}
    }
    }

    return 0;
}
