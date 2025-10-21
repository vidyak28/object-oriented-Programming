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
            
        }
        Complex(float r){
            real=r;
            imag=0;
           
        }
        Complex(float r, float i){
            real =r;
            imag=i;
           
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
   Complex c4=c3;
   c4.display();

   
    return 0;
}