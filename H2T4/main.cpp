#include <iostream>
#include "person.h"
#include<memory>

using namespace std;

int main()
{
    Person objPerson1("Teppo Testaaja", 26);
    objPerson1.PrintData();
    Person *objPerson2=new Person("liisa Joki",38);
    objPerson2->PrintData();
    //Olio pitää muistaa tuhota
    delete objPerson2;
    objPerson2=nullptr;

    //smartpointterilla
    unique_ptr<Person> objPerson3 = make_unique<Person>("Ville Joki",33);
    objPerson3->PrintData();
    return 0;
}
