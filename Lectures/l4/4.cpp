#include<iostream>
#include<string>

using namespace std;
class xy_coordinate{
    private:
        float x;
        float y;
    public:
        void set_value(float a1, float a2);
        void get_value(void);
        //constructor is kind of method which is named as the same of class
        xy_coordinate(){
            cout<<" Hello world !"<<endl;
            this->x=12;
            this->y=29;

        }
};
//return_type name_of_class :: function
void xy_coordinate :: set_value(float a1, float a2){

    this->x=a1;
    this->y=a2;
}
void xy_coordinate :: get_value(void){
    cout<<" x : "<< this->x<< " y :"<< this->y<<endl;
}
int main(){
    xy_coordinate s1,s2;
    
    s1.get_value();
    s2.get_value();
    return 0;
}