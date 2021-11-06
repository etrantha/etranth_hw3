//
// Created by Eric Trantham on 11/3/21.
//

#include "Student.h"
#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;



void Student::display(){
    cout<<"Student: " <<getName()<<endl<<"Birthday: "<<getBirthdate()<<endl<<"Major: "<<major<<endl;
}

Student::Student(Person &pObj, string smajor):Person(pObj), major(smajor), credithours(0){}

Student::Student() {}

void Student::addCredithours(Student &sObj, float scredithours) {
    sObj.credithours += scredithours;
    if(sObj.credithours > 85)
        cout << "Student is above 85 credit hours, please email information to student about applying for graduation. "<<endl;
        cout << "Credit Hours: " << sObj.credithours<< endl;

}



