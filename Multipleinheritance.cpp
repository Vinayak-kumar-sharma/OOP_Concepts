#include<iostream>
using namespace std;

class Animal {  
    public :
    void eat(){
        cout<<"Eating";
    }
};
class peacock {
    public :
    void sound(){
        cout<<"Pe-Pe-cock ";
    }
};

class babypeacock: public peacock, public Animal {
    public:
    void smile(){
        cout<<"Smiling";
    }
};

int main(){
    babypeacock p1;
    p1.eat();
    cout<<endl;
    p1.sound();
    cout<<endl;
    p1.smile();
    cout<<endl;

    return 0;
}