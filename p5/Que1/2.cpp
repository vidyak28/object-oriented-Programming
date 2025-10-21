#include<iostream>
#include<string>
using namespace std;
class second;// telling compiler that it exists but later defined coz we want to declare a friend function inside class A that takes ClassB as a parameter
class first{
    private:
        int numA;
    public:
        first(int a){
            numA=a;
        }
        friend void findLarge(first, second);
};
class second{
    private:
        int numB;
    public:
        second(int b){
            numB=b;
        }
        friend void findLarge(first, second);
};
// Friend function definition outside the class
void findLarge(first a, second b) {// this function now can access both datamembers in two classes and uses it becoz we declared friend in both classes
    if(a.numA>b.numB)
        cout<<" first class has larger value"<< a.numA<< endl;
    else if(a.numA< b.numB)
        cout<<"Second class has larger value."<<b.numB<< endl;
    else 
        cout<< "Both values are equal. "<< a.numA<< endl;
}
int main() {
    first  obj1(5);
    second  obj2(10);

    findLarge(obj1, obj2); // friend function call
    return 0;
}
