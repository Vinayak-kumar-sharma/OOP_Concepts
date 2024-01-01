#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating";
    }
};
// child class1
class Parrot: public Animal{
    public:
    void smile(){
        cout<<"Smiling";
    }
};
//child class2
class pigeon: public Animal{
    public:
    void sound(){
        cout<<"Gutargoo";
    }
};
int main(){
    Parrot p1;
    p1.eat();
    cout<<endl;
    p1.smile();
    cout<<endl;

    pigeon p2;
    p2.sound();
    cout<<endl;

    p2.eat();

    return 0;
}