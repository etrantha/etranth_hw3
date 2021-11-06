//
// Created by Eric Trantham on 11/3/21.
//

#ifndef ETRANTHA_HW3_QY_STUDENT_H
#define ETRANTHA_HW3_QY_STUDENT_H
#include "Person.h"
#include <iostream>

using namespace std;


class Student: public Person{
public:
    Student();
    Student(Person &pObj, string smajor);
    string getMajor()const{return major;}
    float getcredithours()const{return credithours;}
    void addCredithours(Student &sObj, float scredithours);
    void display();

protected:
    string major;
    float credithours;

};


#endif //ETRANTHA_HW3_QY_STUDENT_H
