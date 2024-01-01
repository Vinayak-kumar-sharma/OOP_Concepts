#include<iostream>
using namespace std;
class Complex{
    private :
    int real,img;
    public:
    Complex(int r, int i){
        real=r;
        img=i;
    }
   Complex operator + (Complex const &b){
    Complex a(real + b.real, img + b.img);
    return a;
}


    void print(){
        cout<<real<<" +i"<<img<<endl;
    }
};
int main(){
    Complex c1(10,5), c2(12,4);
    Complex c3 = c1+c2;
    c3.print();
    return 0;
}