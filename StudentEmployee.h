//
// Created by Eric Trantham on 11/5/21.
//

#ifndef ETRANTHA_HW3_QY_STUDENTEMPLOYEE_H
#define ETRANTHA_HW3_QY_STUDENTEMPLOYEE_H
#include "Student.h"
#include <iostream>



class StudentEmployee: public Student{
public:
    StudentEmployee();
    StudentEmployee(Student sObj, float swage, float shours);
    void setWage(float swage){wage = swage;}
    int getWage()const{return wage;}
    void setHours();
    int getHours();
    void display();
    void hourCheck(float sHours); //A check to remind the user that Student Employees are supposed to average under 35 hours biweekly
private:
    float wage, hours;

};


#endif //ETRANTHA_HW3_QY_STUDENTEMPLOYEE_H
