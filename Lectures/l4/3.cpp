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
    xy_coordinate s1;
    s1.set_value(1, 2);
    s1.get_value();
    return 0;
}