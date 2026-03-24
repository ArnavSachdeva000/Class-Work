/*Create a class Person with data members name and age, and a function displayPerson(). Derive a class Student that adds roll number and a function displayStudent(). Show how a Student object can both base and derived class functions.*/
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPerson()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;

public:
    Student(string n, int a, int roll) : Person(n, a), rollNumber(roll) {}

    void displayStudent()
    {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
    }
};