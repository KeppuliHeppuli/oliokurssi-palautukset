#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbersVector;
    int number=1;
    while(number !=99){
        cout<<"Anna luku (lopeta antamalla 99)"<<endl;
        cin>>number;
        //lisätään annettu luku vektoriin
        numbersVector.push_back(number);
    }
    cout << "Vektorissa on luvut: ";
    for (int vnumber: numbersVector){
        //vnumber luetaan vektorista yksi kerrallaan
        if(vnumber !=99)
        cout<<vnumber<<" ";

    }
    cout<<endl;
    return 0;
}
