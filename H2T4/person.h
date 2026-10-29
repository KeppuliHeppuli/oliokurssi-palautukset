#ifndef PERSON_H
#define PERSON_H
#include<iostream>

using namespace std;

class Person
{
private:
    int age;
    string name;
public:
    Person();
    Person(string, int);
    int getAge() const;
    void setAge(int newAge);
    string getName() const;
    void setName(const string &newName);
    //luokan destruktori
    //suoritetaan, kun olio tuhotaan
    //sen nimi on ~Person();
    ~Person();
    void PrintData();
};

#endif // PERSON_H
