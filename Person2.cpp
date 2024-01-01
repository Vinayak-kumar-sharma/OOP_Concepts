#include <iostream>
#include <string>
using namespace std;
class Person{
private :

    string name;
    int age;
    int weight;
    char gender;

public :

    Person(string n, int a, int w, char g){
        name = n;
        age = a;
        weight =w;
        gender = g;

    }
    Person(){
        name ="unknown";
        age =0;
        weight =0;
        gender ='n';

    }
    void print(){
        cout<<"[ "<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"weight : "<<weight<<endl;
        cout<<"Gender (M/F) : "<<gender<<endl;
        cout<<" ]"<<endl;

    }

};
int main(){
    Person p1;
    Person p2("Shyam",20,40,'M');
    p1.print();
    p2.print();

    return 0;
}
