#include <iostream>
#include<string>
using namespace std;
class student {
    private :
    int Rollno;
    string name;
    public :
    int getRollno (){
        return Rollno;
    }
    void setRollno(int n) {
        this->Rollno = n;
    }
    string getname(){
        return name;
    }
    void setname(string a){
        this->name = a;
    }
};
int main(){
    student p1;
    p1.setRollno(01);
    p1.setname("Ram");
    cout<<"Name = "<<p1.getname()<<endl<<"Roll no = "<<p1.getRollno()<<endl;
    return 0;
}