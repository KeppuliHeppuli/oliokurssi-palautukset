#include <iostream>

using namespace std;

int main()
{
    int number=55;
    int *pointer;
    pointer=&number;
    cout <<"Muuttujan number arvo on= "<<number<<endl;
    cout <<"Muuttujan number osoite on= "<<&number<<endl;


    cout <<"*Pointer arvo on= "<<*pointer<<endl;
    cout <<"Pointer arvo on= "<<pointer<<endl;

    return 0;
}
