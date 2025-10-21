//default constructor 
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        string name;
        int age;
       
    public:
        Student(){//constructor without parameter
            name="Vidya";
            age=0;
            cout<<"Default Constructor!!"<<endl;
        }
        Student(string nm ){
           this->name=nm;
           age=0;
           cout<<"Paramaterized constructor with one parameter!"<<endl;
        }
        Student(string nm , int a){
           this->name=nm;
           this->age=a;
           cout<<"Paramaterized constructor with with two parmater!"<<endl;

        }
        void display(){
            cout<<"Name of the student : "<< name << endl;
            cout<<"Age : "<< age<< endl;
            
            cout<<"                           "<<endl;
        }

};
int main(){
    Student s1;
    s1.display();
    Student s2("Pooja");
    s2.display();
    Student s3("Sree", 20);
    s3.display();
    return 0;
}
