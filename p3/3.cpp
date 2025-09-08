#include<iostream>
#include<string>
using namespace std;
class  Book {
    private:
     float price;
     string title;

    public:
     
     void setTitle(string  Newtitle){//you are using method to update balance making sure it shld be positive
        title=Newtitle;
     }
     void setPrice(float Newprice){
        price=Newprice;
     }
     float getPrice() {//function to access the balance
        return price;

      }
      string getTitle(){
        return title;
      }
            

     
};
int main(){
    Book b1;//object declaration
    b1.setTitle("The Ghost");// updating balance
    b1.setPrice(100);
    cout<< "Title of the book : "<< b1.getTitle()<< endl;// to access it using get
    cout<< "Price of the book : "<<b1.getPrice()<<endl;
    return 0;
}