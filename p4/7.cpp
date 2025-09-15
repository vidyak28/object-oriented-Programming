#include<iostream>
#include<string>
using namespace std;
class Distance{
    private:
        float feet,inches;
    public:
        Distance(){
            feet=0.0;
            inches=0.0;
        
            cout<< "Default initialisation"<< endl;

        }
       Distance(float f){
            feet=f;
            inches=0;
       
            cout<< "Initialisation using feet only!"<< endl;

        }
        Distance(float f, float i){
            feet=f;
            inches=i;
            cout<< "Initialised both"<<endl;
        }
        void display(){
            cout<< "Feet: "<< feet
                
                << ", Inches: "<< inches<< endl;
        }
    };
    int main(){
        Distance d1;
        d1.display();
        Distance d2(50.5);
        d2.display();
        Distance d3(50.0, 180.5);
        d3.display();
        return 0;
    }


