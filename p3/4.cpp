#include<iostream>
using namespace std;

class Rectangle {  
    
// private members
private: 
    float length,width;
    
public:

    // Returns the private variable (getter)
    float getlength() {
        return length;
    }
    
    float getwidth(){
        return width;
    }
    float getarea(){
        return length*width;
    }
    // Set the private variable (setter)
    //u created a temporary val here to assign some value for radius indirectly since we cant assign it directly.
      
    void setlength(float len) {
        length=len;
    }
    void setwidth(float wid){
        width=wid;
    }
    
};

int main() {
    Rectangle r1;
    
    // Accessing private variables using public getter and setter methods
    r1.setlength(1.5);// because u u created temporary var and assigned it to the private mem we have directly assign a value to the object here
    r1.setwidth(2);
    cout<< "The area of rectangle is: "<< r1.getarea()<< endl;
    
    return 0;
}