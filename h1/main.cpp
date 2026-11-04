#include <iostream>

using namespace std;

void calcSum(int a,int b){
    cout<<"Summa: " <<a + b <<endl;
}

void calcDiv(int a, int b){
    if (b==0){
            cout << "Virhe: jakaja ei voi olla nolla!" << endl;
    }
    else{
        cout<<"Osamaara: "<< a / b <<endl;
    }
}

int retSum(int a, int b){
    return a + b;
}

float retDiv(int a, int b){
    if (b == 0)
    {
        throw runtime_error("Jakaja ei voi olla nolla!");
    }

    return static_cast<float>(a) / b;
}

int main()
{
    int a, b;
    int sum;
    float result;
    cout << "Anna ensimmainen luku:  " << endl;
    cin>>a;
    cout<<"Anna toinen luku: "<<endl;
    cin>>b;

    calcSum(a, b);
    calcDiv(a, b);

    sum=retSum(a,b);
    cout << "Palautettu summa: " << sum <<endl;
    try {
        result = retDiv(a,b);
        cout << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }


    return 0;
}
