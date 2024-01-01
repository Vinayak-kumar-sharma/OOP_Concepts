#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Book{
    string title;
    double price;
    string author;
public :

    Book (string n, string a, double p) {
        price = p;
        title = n;
        author = a;

    }

    void display() const {

        cout<<"[ Title of the Book : "<<title<<" , ";
        cout<<"Author of the Book : "<<author<<" , ";
        cout<<"Price of the Book : $ "<<price<<" ]"<<endl;

    }
    void updateprice (double np) {
        price = np;

    }
};
int main(){
    vector<Book> collection;
    collection.push_back(Book("Newtown","Admin",0.00));
    collection.push_back(Book("Environment","Admin",0.00));

    for (Book& book : collection) {
        book.display();
        cout << "------------------------" << endl<<endl;
    }

    collection[1].updateprice(01);
    cout<<"updated price tags --->"<<endl<<endl;
    for ( const Book& book : collection){

        book.display();
    }

    return 0;
}