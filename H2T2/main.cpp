#include "henkilo.h"

#include <iostream>

using namespace std;

int main()
{
    Henkilo objHenkilo1;
    objHenkilo1.setName("Teppo Testaaja");
    objHenkilo1.setAge(25);
    Henkilo objHenkkilo2;
    objHenkkilo2.setName("Aino Jarvinen");
    objHenkkilo2.setAge(33);
    objHenkkilo2.printInfo();
    objHenkilo1.printInfo();

    Henkilo objHenkilo3("Liisa Virta",43);
    objHenkilo3.printInfo();
    return 0;
}
