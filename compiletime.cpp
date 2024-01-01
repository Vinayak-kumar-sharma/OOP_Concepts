#include<iostream>
using namespace std;

//   function overloading with the same parameter -> :)
// int add(int a, int b){
//     return a+b;
// }
// int add(int a,int b, int c){
//     return a+b+c;

// }
// function overloading with differnt parameter -> :)
double add(double x, double y, double z, double a){
    return x+y+z+a;
}

//  default argument 
int add(int a, int b, int z=0){
    return a+b+z;
}
int main(){
    cout<<"output1 : "<<add(7,2);
    cout<<endl;
    cout<<"output2 : "<<add(7,2,3)<<endl;
    cout<<"output3 : "<<add(7.7,2,3,1)<<endl;
    return 0;
}