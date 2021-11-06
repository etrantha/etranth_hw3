//
// Created by Eric Trantham on 11/5/21.
//

#include "StudentEmployee.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

StudentEmployee::StudentEmployee():Student(), wage(10) {}

StudentEmployee::StudentEmployee(Student sObj, float swage,float shours):Student(sObj), wage(swage), hours(shours){}

void StudentEmployee::display() {
    float biWeekly;
    biWeekly = 2 * (hours * wage);
    if(hours > 40){
        float overTimesHours, overTimePay;
        overTimesHours = hours - 40;
        overTimePay = overTimesHours * (wage * .5);
        biWeekly += overTimePay;
        cout<<"Overtime Pay: "<<overTimePay;
    }
    cout<<"Student: " <<getName()<<endl<<"Birthday: "<<getBirthdate()<<endl
    <<"Major: "<<major<<endl<<"Wage: "<<wage<<endl<<"Hours: "<<hours<<endl<<"BiWeeklyAverage: $"<<biWeekly<<endl;
}

int StudentEmployee::getHours() {
    return hours;
}

void StudentEmployee::setHours() {
    float  wk1, wk2;
    cout<< "How many hours did the employee work in week 1? "<<endl;
    cin >> wk1;
    cout<< "Week 2? "<<endl;
    cin>> wk2;
    hours = wk1 + wk2;
    hourCheck(hours);
}

void StudentEmployee::hourCheck(float sHours) {
    if(sHours/2 > 35)
        cout << "Reminder: Student Employees are supposed to keep average hours under 35 hours"<< endl;
}



