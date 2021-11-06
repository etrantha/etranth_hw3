/**************************************************************************
 * * Author: Eric Trantham
 * ** Program: hw3, q1
 * ** Date Created: Oct 22, 2021
 * ** Problem: HW3

************************************************************************/

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "StudentEmployee.h"
#include "ProspectiveStudent.h"
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950), p2("Philip", "Jay", 3, 8, 1979);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;
    cout<<"==================Student============================================="<<endl;

    Student s1(p1, "CS"), s2(p2, "Music");
    s1.display();
    s2.display();
    cout<<"==================Student Employee============================================="<<endl;

    StudentEmployee se1(s1, 15.25, 35), se2(s2, 25, 45);
    se1.display();
    se2.display();
    se1.setHours();
    se1.display();
    se1.addCredithours(se1, 14);
    se1.addCredithours(se1, 40);
    se1.addCredithours(se1, 40);

    cout<<"==================Prospective Student============================================="<<endl;

    ProspectiveStudent ps1(p1, 1972, 3.99, "StarkIndusHigh"), ps2(p2, 1997, 2.75, "NYPS105");
    ps1.display();
    ps1.meetMinReguir(ps1);
    ps2.display();
    ps2.meetMinReguir(ps2);

    cout << "===================================Shapes area======================================="<<endl;

    Rectangle rec1(4, 5);
    rec1.getArea();
    rec1.draw();
    rec1.setHeight(8);
    rec1.setWidth(6);
    rec1.getArea();
    rec1.displayHW();
    rec1.draw();

    Triangle tri1(5, 8);
    tri1.getArea();
    tri1.draw();
    tri1.setWidth(7);
    tri1.setHeight(4);
    tri1.getArea();
    tri1.displayHW();
    tri1.draw();

    //Polygon pol1; //"missing vtable" the parent function had no definition



    return 0;
}
