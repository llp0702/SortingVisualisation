//
// Created by llp0702 on 2/25/20.
//

#ifndef CPPSFML_DISPLAY_H
#define CPPSFML_DISPLAY_H


#include <SFML/Graphics/RenderWindow.hpp>
#include "SortArray.h"

class Display {
public :
    Display(int width=500, int height=400)
    {
        this->width = width;
        this->height = height;
    };

    void initAndShow(const SortArray &array){
        initWindowAndShowArray(array);
    }
private :
    void initWindowAndShowArray(const SortArray&);
    void showArray(const SortArray&);
    sf::RenderWindow window;
    int width;
    int height;
};
#endif //CPPSFML_DISPLAY_H
