#include <iostream>
#include<vector>
#include<memory>
#include "course.h"

using namespace std;

int main()
{
    //luodaan smartpointterilla vektori Course-oliolle
    unique_ptr<vector<Course>> courseList = make_unique<vector<Course>>();
    //lisätään vektoriin Course-olioita
    courseList->emplace_back(101,"Olio-ohjelmointi",5);
    courseList->emplace_back(102,"Tietokannat ja rajapinnat",5);
    courseList->emplace_back(103,"Linux",5);

    //tulostetaan vektorin data
    for(Course &objCourse : *courseList){
        objCourse.printData();
    }

    //kysytään käyttäjältä kurssin id
    //ja tulostetaan kyseisen kurssin data

    cout<<"Anna kurssin id: ";
    int value;
    cin>>value;
    int check=0;
    for (Course &objCourse : *courseList){
        if(objCourse.getId()==value){
            objCourse.printData();
            check=1;
            break;
        }
    }
    if(check ==0){
        cout<<"Kurssi ID:lla ei loytynyt kurssia"<<endl;
    }
    return 0;
}
