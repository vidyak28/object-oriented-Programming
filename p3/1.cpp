#include<iostream>
#include<string>
using namespace std;
class  Student {
    private:
     int age;
     string name;

    public:
     string get_name(){// the function that allows to access the private member
        return name;
     }
     void set_name(string Newname){
        name=Newname;//function to update the private member by assigning it to temporary variable coz u  cant directly access or update private data members
     }
     void set_age(int n){
        age=n;
     }
     int get_age(){
        return age;

      }
    
};
int main(){
    Student s1;//object declaration
    s1.set_name("vidya");// updating name
    s1.set_age(18);// updating age
    cout<< "Student Name: "<< s1.get_name()<< endl;// to access it using get
    cout<< " Student Age: "<< s1.get_age()<< endl;
    return 0;
}