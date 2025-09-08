#include<iostream>
#include<string>
using namespace std;
class details{
    private:
      int arr[]={m1,m2,m3,m4 };
      float avg;
      string name;
    public:
        void set_value(int arr[5], float avg, string nm){
            roll_no=rn;
            marks=mr;
            name=nm;
        }
        void get_value(void){
            cout<<" name: "<<name << " marks "<<marks <<" roll_no "<<roll_no<<endl;
        }

};
int main(){
    details d1;
    d1.set_value(34,78.9, "sree");
    d1.get_value();
    return 0;
}
