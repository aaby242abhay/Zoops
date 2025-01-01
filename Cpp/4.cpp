#include<iostream>
using namespace std;

class base;

class anotherClass{
    public:
        void display(base &obj);        //if I don't declare this function here, then I will get an error
};
class base{
    private:
        int priv;
    protected:
        int prot;
    public:     
        base(){
            priv = 111;
            prot = 222;
        }
    
    friend void anotherClass::display(base &);       //member function of another class is a friend of this class

};

void anotherClass::display(base &obj){
    cout << "The value of private member is: " << obj.priv << endl;
    cout << "The value of protected member is: " << obj.prot << endl;
}
 

int main(){
    base b;
    anotherClass ac;
    ac.display(b);
    return 0;
}