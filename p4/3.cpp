#include<iostream>
#include<string>
using namespace std;
class Complex{
    private:
        float real;
        float imag;
    public:
        Complex(){
            real=0;
            imag=0;
            cout<< "Default Constructor"<< endl;
        }
        Complex(float r){
            real=r;
            imag=0;
            cout<< "SIngle argument constructor called!"<< endl;
        }
        Complex(float r, float i){
            real =r;
            imag=i;
            cout<< "Two argument constructor called!"<< endl;
        }
        void display(){

            cout<< real<< " + "<< imag<< " i "<< endl;
        }
    
        };


int main(){
   Complex c1;
   c1.display();
   Complex c2(4);
   c2.display();
   Complex c3(2,5);
   c3.display();
   
    return 0;
}