//
// Created by Eric Trantham on 11/3/21.
//

#ifndef ETRANTHA_HW3_QY_PERSON_H
#define ETRANTHA_HW3_QY_PERSON_H
#include <string>

using namespace std;

class Person
{
public:
    Person();
    Person(std::string first, std::string last, int year, int day, int month);
    std::string getName();
    std::string getBirthdate();
    void display();

private:
    std::string Fname;
    std::string Lname;
    int birthDay;
    int birthMonth;
    int birthYear;

protected:
    /*You may move private members to protected if needed*/


};

#endif //ETRANTHA_HW3_QY_PERSON_H
