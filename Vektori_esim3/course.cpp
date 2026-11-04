#include "course.h"

int Course::getId() const
{
    return id;
}

void Course::setId(int newId)
{
    id = newId;
}

string Course::getName() const
{
    return name;
}

void Course::setName(const string &newName)
{
    name = newName;
}

int Course::getCreditpoints() const
{
    return creditpoints;
}

void Course::setCreditpoints(int newCreditpoints)
{
    creditpoints = newCreditpoints;
}

void Course::printData()
{
    cout<<id<<" : "<<name<<" : "<<creditpoints<<endl;
}

Course::Course() {}

Course::Course(int id, string name, int creditpoints)
{
    this->id=id;
    this->name=name;
    this->creditpoints=creditpoints;
}
