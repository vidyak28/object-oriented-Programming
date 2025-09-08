#include<iostream>
using namespace std;
class Account{
    private:
        int accountNumber;
        float balance;
    public:
        // default constructor which means u dont pass any arguments
        Account(){// same name as class
            accountNumber=0;
            balance=0.0;
            cout<< "Default constructor called here!" << endl;
        }
        void display(){
            cout<< "Account NUmber: "<<accountNumber<<endl;
            cout<<"Balance: "<< balance<<endl;
        }
};
int main(){
    Account acc1;
    acc1.display();
    return 0;
}