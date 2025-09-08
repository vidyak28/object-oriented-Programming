#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    private:
        float length,breadth;
    public:
        Rectangle(float l, float b){
            length=l;
            breadth=b;
        }
        float calculate_area(){
            return length*breadth;
        }
    
};
int main(){
    Rectangle r(5.0,7.5);
    cout<< "Area of rectangle : "<< r.calculate_area()<< endl;
    return 0;
}