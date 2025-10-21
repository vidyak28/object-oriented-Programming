//default constructor 
#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        string name;
        string subject;
        int experience;
    public:
        Teacher(){
            name="Ujjwal";
            subject="Programming";
            experience=5;

        }
        void display(){
            cout<<"Name of the teacher: "<< name << endl;
            cout<<"Subject : "<< subject<< endl;
            cout<<"Experience: " <<experience << " years"<<endl;
        }

};
int main(){
    Teacher t1;
    t1.display();
    return 0;
}
