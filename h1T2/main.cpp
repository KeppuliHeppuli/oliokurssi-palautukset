#include <iostream>

using namespace std;
int laskeNelio(int value);
int main()
{
    /*Kirjoita funktio nimeltä laskeNelio,
     * joka saa parametrina kokonaisluvun ja palauttaa sen neliön.
     * Pääfunktiossa kysy käyttäjältä luku, kutsu laskeNelio-funktiota ja tulosta tulos. */
    int annettu_luku;
    int luvun_nelio;
    cout << "Anna kokonaisluku" << endl;
    cin>> annettu_luku;
    luvun_nelio=laskeNelio(annettu_luku);
    cout<< "Antamasi luvun "<<annettu_luku<<  " nelio on "<<luvun_nelio<<endl;
    return 0;
}

int laskeNelio(int value){
    return value*value;
}
