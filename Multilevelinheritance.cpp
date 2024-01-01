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
class babypeacock: public peacock{
    public:
    void smile(){
        cout<<"Smiling ";
    }
};
int main(){
    babypeacock p2;
    p2.eat();
    cout<<endl;
    p2.sound();
    cout<<endl;
    p2.smile();
    return 0;
}
