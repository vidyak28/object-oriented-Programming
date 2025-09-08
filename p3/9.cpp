#include<iostream>
#include<string>
using namespace std;
class University{
    private:
        string name;
        int ranking;
    public:
        string get_name(){
            return name;
        }
        int get_rank(){
            return ranking;
        }
        void set_name(string Name){
            name=Name;
        }
        void set_rank(int rank){
            ranking= rank;
        }

};
    int main(){
        University n1;
        n1.set_name("Sai University");
        n1.set_rank(100);
        cout<< "Name of the university is : "<<n1.get_name()<< endl;
        cout<< "Ranking is : "<<n1.get_rank()<< endl; 
        return 0;
    }