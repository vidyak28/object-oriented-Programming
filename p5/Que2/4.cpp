#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        string name;
        int age;
    public:
        Student(string nm, int a){
            this->name=nm;
            this->age=a;
        }
        Student(const Student &s){
            this->name=s.name;
            this->age=s.age;

        }
        void display(){
            cout<< "Name: "<< this->name<< ", Age: "<< this->age<< endl;
        }
};
int main(){
    Student s1("Vidya", 19);
    Student s2=s1;
    cout<<" Orginal object (s1): ";
    s1.display();
    cout<<"Copied object (s2): ";
    s2.display();
    return 0;
}