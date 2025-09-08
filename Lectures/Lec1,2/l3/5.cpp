#include<iostream>
#include<string>
using namespace std;
class details{
    private:
      string name,city,state,Highest_mark;
    public:
        void set_value(string nm, string ct, string st, string mk){
            name=nm;
            city=ct;
            state=st;
            Highest_mark=mk;
        }
        void get_value(void){
            float avg;
            avg=(() * 0.2);
            cout<<" name: "<<name << " Average: "<< avg<<endl;
            
        }
};
int main(){
    details d1;
    d1.set_value(34,78.9, "sree");
    d1.get_value();
    return 0;
}
