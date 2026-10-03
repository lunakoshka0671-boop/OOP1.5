#pragma once

#include <string>
#include "Man.h"

using namespace std;

class Student
{
private:
    Man man;
    int course;

public:
    // Методи доступу
    Man getMan() const { return man; }
    int getCourse() const { return course; }

    // Методи запису
    bool setMan(Man newMan);
    bool setCourse(int newCourse);

    // Ініціалізація
    bool Init(Man newMan, int newCourse);

    // Введення та виведення
    void Read();
    void Display() const;

    // Перетворення в рядок
    string toString() const;

    // Методи за варіантом
    bool ChangeCourse(int newCourse);
    bool IncreaseCourse();
};

