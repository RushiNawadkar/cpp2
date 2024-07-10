/*3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */
#include<iostream>
using namespace std;
class book{
    string bknme;
    int id;
    string auther;
    float price;
    public:
    book()
    {
     this-> bknme=bknme;
    this->id=0;
    this ->auther=auther;
    this-> price=0;
      
    }
    book(string bknme,int id,string auther,float price)
    {
    this-> bknme=bknme;
    this->id=id;
    this ->auther=auther;
    this-> price=price;
    }
    void displayinfo()
    {
        cout<<bknme<<" "<<id<<" "<<auther<<" "<<price<<endl;
    }
    void setbknme(int bknme)
    {
        this->bknme=bknme;
    }
    string getbknme()
    {
        return this->bknme;
    } 
    void setid(int id)
    {
        this->id=id;
    }
     int getid(int id)
    {
        return this->id;
    }
    
    string getauther()
    {
        return this->auther;
    }
    void setprice(float price)
    {
        this->price=price;
    }
    float getprice(float price)
    {
        return this->price;
    }



};
int main()
{
    book b1("Mahabharat",101,"vedvyas",150.23);
    b1.displayinfo();
    book b2("abc",4656,"xyz",56);
    b2.displayinfo();
    b1.setprice(56);
    b1.displayinfo();
    cout<<b1.getbknme();

    
   

}