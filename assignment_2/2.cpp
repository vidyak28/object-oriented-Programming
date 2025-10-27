#include<iostream>
#include<string>
using namespace std;
class Dict{
    private:
        string keys[100];
        string values[100];
        int size;
    public:
        Dict(){
            size=0;
        }
        void add(string key, string value){
            keys[size]=key;
            values[size]=value;
            size++;
        }
        void search(string key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                cout << "Value for '" << key << "' is: " << values[i] << endl;
                return;
            }
        }
        }
        void display() {
           cout << "All key-value pairs:\n";
            for (int i = 0; i < size; i++) {
            cout << keys[i] << " : " << values[i] << endl;
        }
    }
};
int main(){
    Dict d;
    d.add("Name", "vidya");
    d.add("Subject", "science");
    d.add("Goal", "IAS");
    d.display();
    d.search("Subject");
    return 0;
}