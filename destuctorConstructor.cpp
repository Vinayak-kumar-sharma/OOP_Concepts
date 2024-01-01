#include <iostream>
using namespace std;

class HelloWorld{
    public :
    HelloWorld(){
       
        cout<<"Constructor is called"<<endl;
    }
    ~HelloWorld(){
        cout<<"Destructor is called"<<endl;
        int x = 2+2;
        cout<<"x = "<<x<<endl;
    }
    void display(){
        cout<<"Case is done"<<endl;
    }
};


int main(){
    cout<<"Calling..."<<endl;
    HelloWorld h;
    h.display();
    return 0;

}