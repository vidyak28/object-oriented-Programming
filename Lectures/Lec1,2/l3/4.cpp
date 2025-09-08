#include<iostream>
#include<string>
using namespace std;
class details{
    private:
      float marks1,mk2,mk3,mk4,mk5;
      string name;
    public:
        void set_value(float m1, float m2, float m3, float m4,  float m5, string nm){
            marks1=m1;
            mk2=m2;
            mk3=m3;
            mk4=m4;
            mk5=m5;
            name=nm;
            
        }
        void get_value(void){
            float avg;
            avg=((marks1+mk2+mk3+mk4+mk5) * 0.2);
            cout<<" name: "<<name << " Average: "<< avg<<endl;
            
        }
};
int main(){
    details d1;
    d1.set_value(34,78.9, "sree");
    d1.get_value();
    return 0;
}
