/* Write a program to find the factorial of a number using a while loop.*/
#include<iostream>
using namespace std;
int main(){
    int i=1,fact=1,n;
    cout<< "Enter a number: "<<endl;
    cin>>n;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    cout<<fact<< endl;
    return 0;

}