#include <iostream>
#include <string>
using namespace std;
class Employee{

    public :
    int id;
    int age;
    string name;

    Employee(string n, int id, int a){
        this->name = n;
        this->id = id;
        this->age = a;

    }
    void display(){
       cout<<id<<"  "<<name<<"  "<<age<<endl;
    }

};
int main(){
    Employee a("Ram",1400,14);
    a.display();
    return 0;

}