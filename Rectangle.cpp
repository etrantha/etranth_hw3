//
// Created by Eric Trantham on 11/6/21.
//

#include "Rectangle.h"
#include <iostream>
using std::cout;
using std::endl;


Rectangle::Rectangle() {
    //ctor
}

Rectangle::Rectangle(int newWidth, int newHeight) {
    width = newWidth;
    height = newHeight;

}


void Rectangle::setWidth(int newWidth){
    width = newWidth;

}


void Rectangle::setHeight(int newHeight){
    height = newHeight;

}

int Rectangle::getArea() {
    int area;
    area = width * height;
    return area;
}

void Rectangle::draw() {
    cout<<"Height: "<<height<< "  "<<"Width: "<<width<<endl;
    for(int i = 0;i != height; i++){
        for(int j =0;j != width;j++){
            if(i==0 || i==height-1 || j==width-1 || j==0)
                cout<<"* ";
            else
                cout<< "  ";
        }
        cout<<endl;
    }
}

void Rectangle::displayHW() {
    cout << "Height: " << height << "  " << "Width: " << width << endl;
}



