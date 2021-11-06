//
// Created by Eric Trantham on 11/3/21.
//

#ifndef ETRANTHA_HW3_QY_POLYGON_H
#define ETRANTHA_HW3_QY_POLYGON_H


class Polygon
{
public:
    Polygon();
    Polygon(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    virtual int getArea()=0; //I made it pure again so it would compile


protected:
    int width = 0;
    int height = 0;

};



#endif //ETRANTHA_HW3_QY_POLYGON_H
