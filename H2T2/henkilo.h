#ifndef HENKILO_H
#define HENKILO_H
#include<iostream>
using namespace std;
class Henkilo
{
private:
    string name;
    int age;
public:
    //Henkilo luokan konstruktori on funktio Henkilo()
    //Sillä ei ole koskaan palautusarvon määrittelyä (int yms.)
    //Luokalla voi olla useita konstruktoreita (funktion ylikuormittaminen)
    Henkilo();
    Henkilo(string, int);

    string getName() const;
    void setName(const string &newName);
    int getAge() const;
    void setAge(int newAge);
    void printInfo();

};

#endif // HENKILO_H
