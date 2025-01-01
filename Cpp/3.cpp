//making the gloabal function the friend function of a class which can be used to access the private members of the class;

#include<iostream>
using namespace std;

class base{
    private:
        int priv;
    protected:
        int prot;
    public:
        base(){
            priv = 1;
            prot = 2;
        }
        friend void globalFriendFunction(base &obj);
};
void globalFriendFunction(base &obj){
    cout << "The value of private member is: " << obj.priv << endl;
    cout << "The value of protected member is: " << obj.prot << endl;
}
int main(){
    base obj;
    globalFriendFunction(obj);
}