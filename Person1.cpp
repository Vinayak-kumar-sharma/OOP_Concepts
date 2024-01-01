#include <iostream>
#include <string>
using namespace std;
class Person {
private :

    string name;
    int age;

public:

    Person(string n, int a){
        name = n;
        age =a;
    }
    void display(){
        cout<<"[ Name : "<<name<<" ,Age : "<<age<<" ]"<<endl;
    }

};
int main(){
    Person p("Ram",20);
    p.display();
    return 0;
}