#include<iostream>
using namespace std;

int main(){
    int num,digit,rev=0;
    cout<< "Enter a number: ";
    cin>> num;
    while(num>0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }

    cout<< "Reverse of number" << " is "<< rev<< endl;
    return 0;
}