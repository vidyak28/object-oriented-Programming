#include<iostream>
#include<string>
using namespace std;
class BankAccount {
    private:
        int accountNumber;
        float balance;
    public:
        BankAccount(){
            accountNumber=12345;
            balance=500.6;
            cout<< "Default Constructor"<< endl;
        }
        BankAccount(int accNo){
            accountNumber=accNo;
            cout<< "Intialising single data member!"<< endl;
        }
        BankAccount(int accNo, float bal){
            accountNumber=accNo;
            balance=bal;
            cout<< "Initialising both data members!"<< endl;
        }
        void display(){

            cout<< accountNumber<< ", "<< balance<< endl;
        }
    
        };


int main(){
   BankAccount acc1;
   acc1.display();
   BankAccount acc2(12345678);
   acc2.display();
   BankAccount acc3(12345678, 1000.5);
   acc3.display();
   
    return 0;
}