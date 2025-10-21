#include<iostream>
#include<string>
using namespace std;
class B;
class A{
    private:
        int num1;
    public:
        A(int n1){
            this->num1=n1;
        }
        friend void swapValues(A &x, B &y);// declaration of friend fucntion that swaps two values
        //& is used to avoid copying objects and even allows the function to modify the objects so the swap works
        void display(){
            cout<<" Number 1: "<<num1<< endl;
        }
};
class B{
    private:
        int num2;
    public:
        B(int n2){
            this->num2=n2;
        }
        friend void swapValues(A &x, B &y);
        void display(){
            cout<<" Number 2: "<<num2<< endl;
        }
};
void swapValues(A &x, B &y){
    int temp=x.num1;
    x.num1=y.num2;
    y.num2=temp;
}
int main(){
    A a(100);
    B b(200);
    cout<<" Before swapping: "<< endl;
    a.display();
    b.display();
    swapValues(a,b);// calling the function to swap
    cout<< endl<< "After swapping: "<< endl;
    a.display();
    b.display();
    return 0;
}