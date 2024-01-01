#include<iostream>
using namespace std;
class Animal {  
    public :
    void eat(){
        cout<<"Eating";
    }
};
class peacock: public Animal {
    public :
    void sound(){
        cout<<"Pe-Pe-cock ";
    }
};

int main(){
    peacock p1;
    p1.eat();
    cout<<endl;
    p1.sound();
    return 0 ;
}