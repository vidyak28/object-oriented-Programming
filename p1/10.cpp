#include<iostream>
using namespace std;
int main(){
    int marks;
    char grade;
    cout<< "Enter student marks (0-100): "<<endl;
    cin>>marks;
    
    if(marks >=90 && marks<=100){
        cout<<" Grade: A"<< endl;
    }else if(marks >=80 && marks <90){
        cout<<" Grade: B"<< endl;
    }else if(marks>=70 && marks<80){
        cout<<" Grade: C"<< endl;
    }else if(marks>=60 && marks<70){
        cout<<" Grade: D"<< endl;
    }else{
        cout<<" Grade: F"<< endl;
    }
    return 0; 

    }


    
