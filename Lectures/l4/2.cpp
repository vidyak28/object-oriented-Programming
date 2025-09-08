#include<iostream>
#include<string>

using namespace std;
class bank_account{
    private:
        string name;// data members
        float bal;
    public:
        void set_value(string n, float b){
            this->name=n;
            this->bal=b;
        }
        void get_value(void){// methods or member functions
            cout<<" Name: "<< this->name <<"  Balance: "<<this->bal <<endl;
        }
        void withdraw(float n1){
            this->bal=this->bal-n1;
        }


};
int main(){
    bank_account a1;
    a1.set_value("Vidya ",1000.90);
    a1.get_value();
    a1.withdraw(500.5);
    a1.get_value();
    return 0;
}
/* void sub(floatn1)
     float temp=this->bal-n1;
     if (temp<=0){
     cout<< "Insufficient balance"};
     else{
     this-> bal=temp;
     -}*/