#include <iostream>
using namespace std;
class Rectangle {
private :
    double len;
    double wid;

public :
    Rectangle(double l =1.0 , double w =1.0){
        len = l;
        wid =w;
    }
    double area(){
        return len*wid;
    }
    double permi(){
        return 2*(len+wid);
    }

    void print(){
        cout<<"AREA : "<<area()<<" , PERIMETER : "<<permi()<<endl;
    }

};
int main(){
    Rectangle r1;
    Rectangle r2(4.0 , 6.0);
    // int x = r1.print();
    // int y = r2.print(); this is not happen due to we use void function in the class to make a member like void print()..
    r1.print();

    r2.print();
    return 0;
}