#include <iostream>
using namespace std;
class Box{
    private:
    int l;
    int b;
    int h;

    public:
    void set_values(int a, int b, int c) {
        l = a;
        b = b;
        h = c;
    }
    void show_data() {
        cout<<"Length = "<<l<<endl<<"Bredth = "<<b<<endl<<"Height = "<<h<<endl;
        cout<<"add = "<<&l;

    }
    void update(int newl){
        l = newl;
       

    }

};
int main() {
    Box b1,b2;
    b1.set_values(5,10,15);
    // b1.show_data();

    Box b3 = b1;
    // b3.show_data();

    b2 = b1;
    // b2.show_data();

    cout<<"UPdated sucessfully"<<endl;


    b1.update(30);
    b1.show_data();
    cout<<endl;
    b3.show_data();
    cout<<endl;
    b2.show_data();
    cout<<endl;
    return 0;

}