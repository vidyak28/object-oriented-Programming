#include<iostream>
#include<string>
using namespace std;
class Book{
    private:
        string title,author;
        float price;
    public:
        Book(string t){
            title=t;
            author="vidya";
            price=0.0;
            cout<< "Book with only title!"<< endl;

        }
        Book(string t, string a){
            title =t;
            author=a;
            price=0.0;
            cout<< "Book with title and author!"<< endl;

        }
        Book(string t, string a, float p){
            title =t;
            author=a;
            price=p;
            cout<< "Book with all three."<<endl;
        }
        void display(){
            cout<< "Title: "<< title
                << ", Author: "<< author
                << ", Price: "<< price<< endl;
        }
    };
    int main(){
        Book b1("Programming basics");
        b1.display();
        Book b2("Python","Rossum");
        b2.display();
        Book b3(" Maths", "Robert", 450.5);
        b3.display();
        return 0;
    }


