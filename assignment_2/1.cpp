#include<iostream>
#include<string>
using namespace std;
class Samplelist{
    private:
        int* arr;// dynamic array
        int size;//After the operation the size of current array
        int capacity;// defined size of an array
    public:
        Samplelist(int c=10){// capacity=10 constructor with one parameter
            this->capacity=c;
            size=0;
            arr= new int[capacity];
        }
        ~Samplelist(){// destructor
            delete[] arr;
        }
        void add(int value){
            if(size== capacity){// no place to add element 
                cout<<"List full! \n"<<endl;
                return ;
            }
            arr[size++]=value;//increase the size and add the element to the list 
        }
        void remove(int value){
            int index=-1;
            for(int i=0; i<size; i++){
                if(arr[i]=value){
                    index=i;
                    break;
                }
            }
            if(index==-1){
                cout<<"ELement not found.\n"<< endl;
                return;
            }
            for(int i=index; i<size-1; i++)
              arr[i]=arr[i+1];
            size--;
        }
        void display() {
        cout << "[ ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << "]\n";
    }
    int getSize(){
        return size;
    }
    int operator[](int index) {
        if (index < 0 || index >= size) {
            cout << "Index out of range!\n";
            return -1;
        }
        return arr[index];
    }
};
int main(){
    Samplelist list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    
    list.display();
    list.remove(4);
    list.display();
    cout<<"Size: "<<list.getSize()<< endl;
    cout<<"Element at index 2: "<<list[2]<<endl;
    return 0;
}