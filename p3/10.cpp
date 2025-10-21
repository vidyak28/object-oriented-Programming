#include<iostream>
#include<string>
using namespace std;
class Temperature{
    private:
        double celsius;
    public:
        double get_celsius(){
            return celsius;
        }
        double get_fahrenhit(){
            return (celsius*9.0/5.0)+32.0;
        }
        void set_celsius(double c){
            celsius=c;
        }

};
int main(){
    Temperature t;
    t.set_celsius(32.0);
    cout<< "Temperature in Fahrenhit: "<< t.get_fahrenhit()<< " F"<<endl;
    return 0;
}