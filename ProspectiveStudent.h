//
// Created by Eric Trantham on 11/5/21.
//

#ifndef ETRANTHA_HW3_QY_PROSPECTIVESTUDENT_H
#define ETRANTHA_HW3_QY_PROSPECTIVESTUDENT_H
#include <string>
#include "Person.h"
#include <iostream>


class ProspectiveStudent: public Person{
public:
    ProspectiveStudent();
    ProspectiveStudent(Person &pObj, int sgradYear, float sGPA, string shighSchool);
    void meetMinReguir(ProspectiveStudent &proObj);
    void display();
protected:
    int gradYear;
    float gpa;
    string highSchool;

};


#endif //ETRANTHA_HW3_QY_PROSPECTIVESTUDENT_H
