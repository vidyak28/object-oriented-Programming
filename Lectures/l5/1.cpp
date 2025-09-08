#include<iostream>
#include<string>

using namespace std;
class state_bank{
    private:
        string name;// data members
        int acc_no;
        float bal;
    public:
    static float total_balance;//declaration of static variable
        state_bank(string n, float b, int no){
            this->name=n;
            this->bal=b;
            this->acc_no=no;
            this->total_balance=total_balance+b;
        }
        void get_details(void){// methods or member functions
            cout<<" Name: "<< this->name << "Account number: " << this->acc_no<<"  Balance: "<<this->bal <<endl;
        }
        


};//return_type name_of_class :: function
static float :: total_balance=0;
int main(){
    state_bank a1("Vidya", 63565, 300.0);
    a1.get_details();
    
    return 0;
}