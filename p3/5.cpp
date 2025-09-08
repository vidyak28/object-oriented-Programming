#include<iostream>
#include<string>
using namespace std;
class  Employee {
    private:
     float salary;
     int id;

    public:
     
     void set_value(int ID){
        id=ID;
        
     }
     void set_value1(float amount){
        salary=amount;
     }
     float get_value() {//function to access the balance
        return id;

      }
      float get_value1(){
        return salary;
      }
     
};
int main(){
    Employee p1;//object declaration
    p1.set_value(143);
    p1.set_value1(18000.5);// updating balance
    
    cout<< "Employee ID: "<< p1.get_value()<< endl;// to access it using get
    cout<< "Employee salary: "<< p1.get_value1()<< endl;
    return 0;
}