#include<iostream>
using namespace std;
int main(){
    int year;
    cout<< "Enter a year: "<< endl;
    cin>>year;
    if(year%400==0 || year%4==0){
        cout<<" Entered year is leapy year."<< endl;
    }else{
        cout<<" Entered year is not a leap year."<< endl;
    }
    return 0;
}

