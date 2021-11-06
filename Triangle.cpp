//
// Created by Eric Trantham on 11/6/21.
//

#include "Triangle.h"
#include <iostream>
using std::cout;
using std::endl;



Triangle::Triangle() {
    //ctor
}

Triangle::Triangle(int newWidth, int newHeight) {
    width = newWidth;
    height = newHeight;

}


void Triangle::setWidth(int newWidth){
    width = newWidth;

}


void Triangle::setHeight(int newHeight){
    height = newHeight;

}

int Triangle::getArea() {
    int area;
    area = width * (height/2);
    return area;
}

void Triangle::draw() {
    cout<<"Height: "<<height<< "  "<<"Width: "<<width<<endl;
    for(int i = height; i >= 1; i--) {
        for (int j = 0; j < (height - i); j++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << "*";
        }
        cout<<endl;
        }
    }

void Triangle::displayHW() {
    cout<<"Height: "<<height<< "  "<<"Width: "<<width<<endl;

}


