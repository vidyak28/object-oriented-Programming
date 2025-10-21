#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        string name;
        int age;
        float marks;
    public:
        Student(){//default constructor
            name="Vidya";
            age=18;
            marks=90;
            // if u dont assign some values above the constructor by default will take values
            cout<< "Default constructor called!"<< endl;
          
        }
        Student(string Name,int Age, float Marks){
            name=Name;
            age=Age;
            marks=Marks;
            cout<< "Paramaterized constructor called!!"<< endl;
        }
        void display(){

            cout<<"Name: "<< name<< " Age: "<< age<< " Marks: "<< marks<< endl;
        }
    
    };


int main(){
    Student s1;
    s1.display();
   
    Student s2("Vidya", 19, 90.5);
    s2.display();
    return 0;
}