#include <iostream>

using namespace std;
void tuplaa(int a);
void tuplaa_2(int *a);

int main()
{
    int a;
    cout << "Anna luku" << endl;
    cin>>a;
    tuplaa(a);
    cout<<"Mainissa a="<<a<<endl;
    tuplaa_2(&a);
    cout<<"Nyt Mainissa a="<<a<<endl;
    return 0;
}

void tuplaa(int a){
    /*
     * tämä funktio luo uuden muuttujan a,
     * joka on siis eri kuin mainissa oleva a
     */
    a=2*a;
    cout<<"funktiossa tuplaa a="<<a<<endl;
}

void tuplaa_2(int *a){
    /*
     * tämä funktio saa mainissa olevan muuttujan a osoitteen
     * ja se muokkaa tuon muistipaikan sisältöä
     */
    *a=*a*2;
}
