#include<iostream>
using namespace std;

int main(){
    for(int num=2; num<100; num++){
        int i;
        for(i=2; i<num; i++){
            if(num%i==0)break;
        }
        if(i==num)
        cout<< num << " "<< endl;
    }
    return 0;
}