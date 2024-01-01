#include <iostream>
using namespace std;
class A {
    public :
    void eat(){
        cout<<"Eating";
    }
};
class B {
    public:
    void eat(){
        cout<<"Eating..!!!";
    }
};
class C: public A, public B {
    public:
};
//both the class have same name of methods
int main(){
    C abc;
    abc.A ::eat();
   
    return 0;
}