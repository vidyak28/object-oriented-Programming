#include<iostream>
#include<string>
using namespace std;
class person{//base class 
    string name;
    int age;
    public:
        void getdetails(){//function to get details from the user
            cout<<" Enter name: "<<endl;
            cin>>  name;
            cout <<"Enter age: "<< endl;
            cin>>age;
        }
        void displayperson(){
            cout<<"Name: "<< name<< endl;
            cout<< "Age: "<< age<< endl;
        }
};
class Employee: public person{//derived class 1
    double salary;
    public:
        void getData(){
            getdetails();//calling function of base class here to usee those datamembers
            cout<<"Enter Salary: "<< endl;
            cin>> salary;
        }
        void displayemployee(){
            displayperson();//calling the function to display data members of base class along with derived class 1 details
            cout<< "Employee Salary: "<< salary<< endl;
        }
    
};
class Manager: public Employee{//derived class 2
    int teamsize;
    public:
     void getManagerdata(){
        getData();
        cout<<"Enter Team size: ";
        cin>>teamsize;
     }
     void displayManager(){
        displayemployee();{
            cout<<"Team size: "<< teamsize<< endl;
        }

     }
};
int main(){
    Manager m;
    cout<< " Enter Manager Details. "<< endl;
    m.getManagerdata();// calling the manager class details to enter 

    cout<<" Displaying Manager details. "<< endl;
    m.displayManager();
    return 0;
}
