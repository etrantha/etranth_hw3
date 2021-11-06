//
// Created by Eric Trantham on 11/6/21.
//

#ifndef ETRANTHA_HW3_QY_RECTANGLE_H
#define ETRANTHA_HW3_QY_RECTANGLE_H
#include "Polygon.h"
#include <iostream>


class Rectangle: public Polygon{
public:
    Rectangle();
    Rectangle(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    int getArea();
    void displayHW();
    void draw();

protected:
private:
    int width = 0;
    int height = 0;

};


#endif //ETRANTHA_HW3_QY_RECTANGLE_H
