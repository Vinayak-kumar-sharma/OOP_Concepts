#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private :
    string accontnumber;
    double balance;

public :
    BankAccount(string a, double b){
        accontnumber =a;
        balance =b;
    }
    void deposite(double amount){
        if(amount>0){
            balance += amount;
            cout<<"Deposited $ : "<<amount<<" into "<<accontnumber<<endl;
            cout<<"CurrentBalance $ : "<<balance<<" into "<<accontnumber<<endl;
        }
        else{
            cout<<"Invalid entry "<<endl;
        }
    }
    void withdraw(double amount){
        if(amount>0 && amount <= balance){
            balance -= amount;
            cout<<"Amount debited : "<<amount<<endl;
            cout<<"Your current balance : "<<balance<<endl;
        }
        else{
            cout<<"Invalid entry"<<endl;
        }
    }
    void display(){
        cout << "Account " << accontnumber << " Balance: $" << balance << endl;
    }
};
int main(){
    cout<<" <--------------WELCOME----------------------------->"<<endl<<"   <-------------BANK------------------->  "<<endl;

    BankAccount P1("123456",5000);
    P1.deposite(12000);
    P1.withdraw(1200);
    P1.display();

    return 0;
}