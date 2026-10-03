#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    // ќб'Їкт Man
    Man man;

    cout << "===== MAN =====" << endl;

    man.Read();

    cout << endl << "Man:" << endl;
    man.Display();

    cout << endl << "Man toString:" << endl;
    cout << man.toString() << endl;


    // «м≥на даних Man
    string newName;
    int newAge;
    double newWeight;

    cout << endl << "New name: ";
    cin >> newName;
    man.ChangeName(newName);

    cout << "New age: ";
    cin >> newAge;
    man.ChangeAge(newAge);

    cout << "New weight: ";
    cin >> newWeight;
    man.ChangeWeight(newWeight);

    cout << endl << "Changed Man:" << endl;
    man.Display();


    // ќб'Їкт Student
    Student student;

    cout << endl << "===== STUDENT =====" << endl;

    student.Read();

    cout << endl << "Student:" << endl;
    student.Display();

    cout << endl << "Student toString:" << endl;
    cout << student.toString() << endl;


    // «м≥на курсу
    int newCourse;

    cout << endl << "New course: ";
    cin >> newCourse;

    if (student.ChangeCourse(newCourse))
        cout << "Course changed." << endl;
    else
        cout << "Invalid course." << endl;

    student.Display();


    // «б≥льшенн€ курсу
    if (student.IncreaseCourse())
        cout << endl << "Course increased." << endl;
    else
        cout << endl << "Course cannot be increased." << endl;

    student.Display();


    return 0;
}