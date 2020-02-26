//
// Created by llp0702 on 2/25/20.
//
#include <SFML/Graphics.hpp>
#include <thread>
#include <iostream>
#include "Display.h"
#include "util.h"
using namespace std;
void Display::initWindowAndShowArray(const SortArray & array) {
    this->window.create( sf::VideoMode(width, height), "Sort");
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        showArray(array);
        // clear the window with black color
        window.clear(sf::Color::Black);
    }
}
void Display::showArray(const SortArray &array){
    // draw everything here...
    // window.draw(...);
    //array.print();
    const std::vector<int> v=array.getV();
    const int size =v.size();
    const int sizePixels = width/size;
    for(int i=0; i<size; i++){
        sf::RectangleShape rect(sf::Vector2f(width/size,v[i]));
        rect.setPosition( i*(sizePixels), height-v[i]);
        std::vector<int> rgb=util::fromIntToRgb(v[i], height);
        rect.setFillColor(sf::Color(rgb[0],rgb[1],rgb[2]));
        window.draw(rect);
    }
    // end the current frame
    window.display();
}
