#include "Student.h"
#include <iostream>
#include <sstream>

using namespace std;

bool Student::setMan(Man newMan)
{
    man = newMan;
    return true;
}

bool Student::setCourse(int newCourse)
{
    if (newCourse < 1 || newCourse > 6)
        return false;

    course = newCourse;
    return true;
}

bool Student::Init(Man newMan, int newCourse)
{
    return setMan(newMan) && setCourse(newCourse);
}

void Student::Display() const
{
    cout << endl;

    cout << "man =" << endl;
    man.Display();

    cout << "course = " << course << endl;
}

void Student::Read()
{
    Man newMan;
    int newCourse;

    cout << endl;
    cout << "Man:" << endl;

    newMan.Read();

    do
    {
        cout << "course =  ";
        cin >> newCourse;
    } while (!setCourse(newCourse));

    Init(newMan, newCourse);
}

string Student::toString() const
{
    stringstream sout;

    sout << "Student: "
        << man.toString()
        << ", course = " << course;

    return sout.str();
}

bool Student::ChangeCourse(int newCourse)
{
    return setCourse(newCourse);
}

bool Student::IncreaseCourse()
{
    if (course >= 6)
        return false;

    course++;

    return true;
}