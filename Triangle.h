//
// Created by Eric Trantham on 11/6/21.
//

#ifndef ETRANTHA_HW3_QY_TRIANGLE_H
#define ETRANTHA_HW3_QY_TRIANGLE_H
#include "Polygon.h"
#include <iostream>


class Triangle: public Polygon{
public:
    Triangle();
    Triangle(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    void displayHW();
    void draw();
    int getArea();

protected:
private:
    int width = 0;
    int height = 0;

};




#endif //ETRANTHA_HW3_QY_TRIANGLE_H
