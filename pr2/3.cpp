/*Find the sum of the first N natural numbers (input N) using a for loop.*/
#include<iostream>
using namespace std;
int main(){
    int N,sum=0;;
    cout<< "Enter n value: "<< endl;
    cin>>N;
    for(int i=1; i<=N; i++){
        sum=sum+i;
    }
    cout<< "The sum of first " << N << " is "<< sum <<endl;

    return 0;
}