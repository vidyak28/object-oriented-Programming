#include<iostream>
using namespace std;
class circle{
    public:
        float radius;
        float compute_area(){
            return 3.14*radius*radius;
        }
};
int main(){
    circle obj;
    obj.radius=3.5;
    cout<< "Radius is: "<<obj.radius<< endl;
    cout<< "Area is : "<<obj.compute_area()<< endl;
    return 0;
}
