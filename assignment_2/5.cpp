#include<iostream>
#include<string>
using namespace std;
class person{
    public: 
        string name="Sree";
        int age =19;
        void displayperson(){
            cout<<"Age: "<< age <<endl;
        }
};
class Athlete{
    public:
    string name="TomandJerry";
    string category="Cartoon";
    void displayAthlete(){
        cout<<"Category: "<<category<< endl;
    }
};
class Sportsperson : public person,public Athlete{
    public:
        void display(){
            cout<<"Name: "<<person::name<< endl;// this helps u  to find which base class function u want to call
            cout<<"Sports Name: "<<Athlete::name<<endl;
        }
};
int main(){
    Sportsperson s;
    s.display();
    s.displayperson();
    s.displayAthlete();
    return 0;
}