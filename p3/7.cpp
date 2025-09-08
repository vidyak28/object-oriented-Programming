#include<iostream>
using namespace std;

class Circle {  
    
// private members
private: 
    float radius;
    
public:

    // Returns the private variable (getter)
    float getRadius() {
        return radius;
    }
    
    // Set the private variable (setter)
    //u created a temporary val here to assign some value for radius indirectly since we cant assign it directly.
      
    void setRadius(double val) {
    if (val >= 0)
        radius = val;
    else
        cout << "Invalid radius!" << endl;
}
    float compute_area() {
        return 3.14*radius*radius;
    }
    
};

int main() {
    Circle obj;
    
    // Accessing private variables using public getter and setter methods
    obj.setRadius(1.5);// because u u created temporary var and assigned it to the private mem we have directly assign a value to the object here
    cout << "Radius is: " << obj.getRadius() << endl;
    cout << "Area is: " << obj.compute_area();
    
    return 0;
}