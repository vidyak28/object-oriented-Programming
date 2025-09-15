#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
        string name;
        int id;
        double salary;
    public:
       Employee(string nm, int ID){
            name=nm;
            id=ID;
            salary=0.0;
            cout<< "Initialised name and id!"<< endl;

        }
        Employee(string nm, int ID, double sal){
            name=nm;
            id=ID;
            salary=sal;
            cout<< "Initialised All three data members"<<endl;
        }
        void display(){
            cout<< "Employee Name: "<< name
            << ", Employee ID:"<< id
                << ", Employee Salary: "<< salary << endl;
        }
    };
    int main(){
        
        Employee E1("Vidya", 45);
        E1.display();
        Employee E2("vidya", 45, 12000.0);
        E2.display();
        return 0;
    }


