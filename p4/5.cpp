#include<iostream>
#include<string>
using namespace std;
class Time{
    private:
        int hours,minutes,seconds;
    public:// default constructor
        Time(){
            hours=0;
            minutes=0;
            seconds=0;
            cout<< "Initialised all three."<< endl;
        }
        Time(int h, int m){
            hours=h;
            minutes=m;
            seconds=0;
            cout<< "COnstructor with hours and minutes and seconds set to zero."<< endl;
        }
        Time(int h, int m, int s){
            hours=h;
            minutes=m;
            seconds=s;
            cout<< "All the three data members initialised."<< endl;

        }
        void display(){
            cout<< hours<< "h: "<< minutes<< "m: "<<seconds<< "s"<< endl;
        }

};
int main(){
    Time t1;
    t1.display();
    Time t2(10,30);
    t2.display();
    Time t3(12, 13,15);
    t3.display();
    return 0;
}