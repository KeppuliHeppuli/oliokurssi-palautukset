#include "henkilo.h"

string Henkilo::getName() const
{
    return name;
}

void Henkilo::setName(const string &newName)
{
    name = newName;
}

int Henkilo::getAge() const
{
    return age;
}

void Henkilo::setAge(int newAge)
{
    age = newAge;
}

void Henkilo::printInfo()
{
    cout<<"Name is: "<<name<<endl<<"Age is: "<<age<<endl;
    cout<<"-------------------------------"<<endl;
}


Henkilo::Henkilo() {}

Henkilo::Henkilo(string n, int a)
{
    name=n;
    //voidaan kirjoittaa myös muodossa
    //this->name=name
    //mutta this-> ei ole tarpeen, kun parametrin nimi on eri
    //kuin luokan muuttuja
    age=a;
}

