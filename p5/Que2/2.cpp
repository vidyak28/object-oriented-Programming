//default constructor 
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        string name;
        int age;
        string interested_sub;
    public:
        Student(string nm, int Age, string subject){
           this->name=nm;
           this->age=Age;
           this->interested_sub=subject;
           cout<<"Paramaterized constructor called!"<<endl;

        }
        void display(){
            cout<<"Name of the student : "<< name << endl;
            cout<<"Age : "<< age<< endl;
            cout<<"Interested subject : " <<interested_sub<<endl;
            cout<<"                           "<<endl;
        }

};
int main(){
    Student s1("Vidya", 19, "Social");

    s1.display();
    Student s2("Pooja", 19, "Programming");
    s2.display();
    return 0;
}
