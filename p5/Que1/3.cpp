#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    private:
        float length;
        float width;
    public:
        Rectangle(float l, float w){
            this->length=l;
            this->width=w;
        }
        friend float findArea(Rectangle r);
};
float  findArea(Rectangle r){
    return r.length*r.width;

}
int main(){
    Rectangle r1(13.2, 15.5);
    cout<< "The area of the rectangle is " << findArea(r1)<< endl;
    return 0;
}