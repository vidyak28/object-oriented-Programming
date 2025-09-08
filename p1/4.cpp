#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    if(a>0){
        cout<<"positive number."<<endl;
    }else if(a<0){
        cout<<"Negative number."<<endl;
    }else{
        cout<<"Zero"<<endl;
    }
    return 0;
}