#pragma once

#include <string>

using namespace std;

class Man
{
private:
    string name;
    int age;
    string gender;
    double weight;

public:
    // Методи доступу
    string getName() const { return name; }
    int getAge() const { return age; }
    string getGender() const { return gender; }
    double getWeight() const { return weight; }

    // Методи запису
    bool setName(string newName);
    bool setAge(int newAge);
    bool setGender(string newGender);
    bool setWeight(double newWeight);

    // Ініціалізація
    bool Init(string newName, int newAge, string newGender, double newWeight);

    // Введення та виведення
    void Read();
    void Display() const;

    // Перетворення в рядок
    string toString() const;

    // Методи за варіантом
    bool ChangeName(string newName);
    bool ChangeAge(int newAge);
    bool ChangeWeight(double newWeight);
};

