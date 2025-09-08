#include<iostream>
#include<string>

using namespace std;
class bank_account{
    private:
        string name;// data members
        float bal;
    public:
        /*void set_value(string n, float b){
            this->name=n;
            this->bal=b;
        }
        void get_value(void){// methods or member functions
            cout<<" Name: "<< this->name <<"  Balance: "<<this->bal <<endl;
        }
        void withdraw(float n1){
            this->bal=this->bal-n1;
        }*/
       bank_account (string n, float b){
            this->name="vidya";
            this->bal=1000.0;
       }


};
int main(){
    bank_account a1;
    
   
    return 0;
}
/* void sub(floatn1)
     float temp=this->bal-n1;
     if (temp<=0){
     cout<< "Insufficient balance"};
     else{
     this-> bal=temp;
     -}*/