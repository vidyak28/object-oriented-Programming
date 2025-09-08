#include<iostream>
using namespace std;
class Account{
    private:
        int accountNumber;
        float balance;
    public:
        int get_acc(){
            return accountNumber;
        }
        float get_bal(){
            return balance;
        }
        void set_accNo(int accNo){
            accountNumber=accNo;
        }
        void set_bal(float bal){
            if(bal>=0){
                balance=bal;
            }else{
                cout<<"Balance cannot be negative."<<endl;

            }
        }
};
int main(){
    Account acc1;
    acc1.set_accNo(12345678);
    acc1.set_bal(5000.65);
    cout<< " Account Number : "<< acc1.get_acc()<< endl;
    cout<<" Available Balance: "<<acc1.get_bal()<< endl;
    return 0;


}