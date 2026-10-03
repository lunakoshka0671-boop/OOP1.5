#include "Man.h"
#include <iostream>
#include <sstream>

using namespace std;

bool Man::setName(string newName)
{
    if (newName.empty())
        return false;

    name = newName;
    return true;
}

bool Man::setAge(int newAge)
{
    if (newAge < 0 || newAge > 120)
        return false;

    age = newAge;
    return true;
}

bool Man::setGender(string newGender)
{
    if (newGender != "male" && newGender != "fem")
        return false;

    gender = newGender;
    return true;
}

bool Man::setWeight(double newWeight)
{
    if (newWeight <= 0)
        return false;

    weight = newWeight;
    return true;
}

bool Man::Init(string newName, int newAge, string newGender, double newWeight)
{
    return setName(newName) &&
        setAge(newAge) &&
        setGender(newGender) &&
        setWeight(newWeight);
}

void Man::Display() const
{
    cout << endl;
    cout << "name = " << name << endl;
    cout << "age = " << age << endl;
    cout << "gender = " << gender << endl;
    cout << "weight = " << weight << endl;
}

void Man::Read()
{
    string newName;
    int newAge;
    string newGender;
    double newWeight;

    do
    {
        cout << endl;
        cout << "name =  ";
        cin >> newName;
    
        cout << "age = ";
        cin >> newAge;
   
        cout << "gender (male/fem) =  ";
        cin >> newGender;
  
        cout << "weight =  ";
        cin >> newWeight;
    } while (!Init( newName, newAge, newGender, newWeight));
}

string Man::toString() const
{
    stringstream sout;

    sout << "name = " << name
        << ", age = " << age
        << ", gender = " << gender
        << ", weight = " << weight;

    return sout.str();
}

bool Man::ChangeName(string newName)
{
    return setName(newName);
}

bool Man::ChangeAge(int newAge)
{
    return setAge(newAge);
}

bool Man::ChangeWeight(double newWeight)
{
    return setWeight(newWeight);
}
