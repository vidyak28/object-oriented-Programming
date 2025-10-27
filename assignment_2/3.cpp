#include<iostream>

using namespace std;
class Shape{// base class which holds all the attributes that can be inherited by derived class
    public:
    double length;
    double  breadth;
       Shape(double l, double b){// constructor with two parameters 
        this->length=l;
        this->breadth=b;
       }
};
class Rectangle: public Shape{// the derived class simply inherits the features of base class
    public:
        Rectangle(double l, double b): Shape(l,b){}// inherited the properties of base class into the derived class
        double calculate_area(){// methods of derived classes using the base class datamembers
            return length*breadth;
        }
        double calculate_perimeter(){
            return 2*(length+breadth);
        }

};
int main(){
    Rectangle r(10,5);
    cout<<"Rectangle Area: "<<r.calculate_area()<<endl;// using methods of derived class
    cout<<"Rectangle Perimter: "<<r.calculate_perimeter()<<endl;
    return 0;
}
//If you need to add a new feature that applies to all shapes, like a color property,
// you only have to add it to the base Shape class. All derived classes will automatically inherit this new feature. This saves you from having to manually modify every single shape class,