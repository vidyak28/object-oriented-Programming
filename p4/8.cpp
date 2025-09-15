#include<iostream>
#include<string>
using namespace std;
class Car{
    private:
        string brand;
        int model;
        double price;
    public:
        Car(string B){
            brand=B;
            model=0;
            price=0.0;
            cout<< "Initialised only brand."<< endl;
        }
        Car(string B, int M){
            brand=B;
            model=M;
            price=0.0;
            cout<<"Initialised brand and model."<< endl;
        }
        Car(string B, int M, double P){
            brand =B;
            model=M;
            price=P;
            cout<<"Initialised all data members."<<endl;
        }
        void display(){
            cout<< "Brand Name: "<< brand
            <<", Model: "<< model
            <<", Price: "<< price<< endl;
        }

};
int main(){
    Car c1("Kia");
    c1.display();
    Car c2("BMW", 12345);
    c2.display();
    Car c3("Maruthi ", 54321, 4000000.8);// in the output i got price as default value even though i initalised it
    c3.display();
    return 0;

}
