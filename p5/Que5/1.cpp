#include<iostream>
#include<string>
using namespace std;
class Favfood{
    private:
        string veg;
        string nonveg;
    public:
        Favfood(string v, string nv){
            this->veg=v;
            this->nonveg=nv;
        }
        string getVeg(){
            return veg;
        }
        string getNonveg(){
            return nonveg;
        }
        void setVeg(string v){
            veg=v;
        }
        void setNonveg(string nv){
            nonveg=nv;
        }
    void checkNonVeg(string day) {
        if (day != "Saturday") {
            cout << "You can eat non-veg: " << nonveg << " today!" << endl;
        } else {
            cout << "No non-veg today! Only veg: " << veg << endl;
        }
    }

};
int main(){
    Favfood special("Paneer", "chicken");
    cout<<" Veg food: "<< special.getVeg()<<endl;
    cout<<" Non-veg food: "<< special.getNonveg()<< endl;
    special.checkNonVeg("Monday");
    special.checkNonVeg("Saturday");
    return 0;

}