//
// Created by Eric Trantham on 11/5/21.
//

#include "ProspectiveStudent.h"
#include <iostream>
using std::cout;
using std::endl;



ProspectiveStudent::ProspectiveStudent():Person() {}

ProspectiveStudent::ProspectiveStudent(Person &pObj, int sgradYear, float sGPA, string shighSchool):Person(pObj), gradYear(sgradYear), gpa(sGPA), highSchool(shighSchool){}

void ProspectiveStudent::display() {
    cout<<"Student: " <<getName()<<endl<<"Birthday: "<<getBirthdate()<<endl<<"GradYear: "<<gradYear<<endl
    <<"GPA: "<<gpa<<endl<<"Highschool: "<<highSchool<<endl;
}

void ProspectiveStudent::meetMinReguir(ProspectiveStudent &proObj) {
    if(proObj.gpa > 2.85)
        cout << "yes, the student meet the min requirements" << endl;
    else
        cout << "no, the student does Not meet the min requiments" << endl;

}


