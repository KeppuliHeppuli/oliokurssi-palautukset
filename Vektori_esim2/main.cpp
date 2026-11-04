#include <iostream>
#include "person.h"
#include<vector>
using namespace std;
/*
 * Tutkitaan kuinka vektoriin voidaan lisätä olioita
 */

int main()
{
    //luodaan vektori Person luokan olioille
    vector<Person>personList;
    //luodaan yksi olio ja lisätään se
    //listaan push_back metodilla
    Person objPerson=Person("Teppo", "Testi");
    personList.push_back(objPerson);

    //Lisätään kaksi uutta oliota listaan
    //emplace_back  metodilla
    personList.emplace_back(Person("Liisa","Virta"));
    personList.emplace_back(Person("Ville","Joki"));

    //kysytään käyttäjältä henkilön etunimi ja sukunimi
    //ja lisätään listaan
    string newfn;
    string newln;
    cout<<"Anna etunimi: ";
    cin>>newfn;
    cout<<"Anna sukunimi: ";
    cin>>newln;
    personList.emplace_back(Person(newfn,newln));

    //sama toisella tavalla
    Person objPerson2;
    cout<<"Anna 2. etunimi: ";
    cin>>newfn;
    cout<<"Anna 2. sukunimi: ";
    cin>>newln;
    objPerson2.setFname(newfn);
    objPerson2.setLname(newln);
    personList.push_back(objPerson2);

    cout<<"Personlistan oliot"<<endl;
    //tulostetaan kaikkien listalla olioiden data
    for(Person &objP: personList){
        objP.printData();
    }

    //tulostetaan ensimmäisen olion data
    cout<<"Eka olio: ";
    personList[0].printData();

    cout<<"Listan olioiden maara= "<<personList.size()<<endl
        ;
    return 0;
}
