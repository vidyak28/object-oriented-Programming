#include<iostream>
#include<string>
using namespace std;
class  Person {
    public:
     int age;
     string name;
    
};
int main(){
    Person p1;
    p1.age=20;
    p1.name="vidya";
    cout<< "Name: "<< p1.name << endl;
    cout<< "Age : "<< p1.age << endl;
    return 0;
}