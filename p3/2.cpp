#include<iostream>
#include<string>
using namespace std;
class  BankAcc {
    private:
     float balance;

    public:
     
     void set_Balance(float n){//you are using method to update balance making sure it shld be positive
        if(n>=0){
            balance=n;
     }  else {
        cout<< "Error!" << endl;
     }
     }
     float get_Balance() {//function to access the balance
        return balance;

      }
     
};
int main(){
    BankAcc p1;//object declaration
    p1.set_Balance(1000.5);// updating balance
    
    cout<< "Account Balance: "<< p1.get_Balance()<< endl;// to access it using get
    
    return 0;
}