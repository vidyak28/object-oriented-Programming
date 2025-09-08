#include<iostream>
#include<string>
using namespace std;
class  Car {
    private:
     string brand,model;

    public:
     
     void set_value(string Brand){
        brand=Brand;
    
     }
     void set_value1(string Model){
        model=Model;
     }
     string get_value() {//function to access the balance
        return brand;

      }
      string get_value1(){
        return model;
      }
      
     
};
int main(){
    Car c1;//object declaration
    c1.set_value("Maruthi");
    c1.set_value1("E123");// updating balance
    
    cout<< "Car model: "<< c1.get_value1()<< endl;// to access it using get
    cout<< "Car brand: "<< c1.get_value()<< endl;
    return 0;
}