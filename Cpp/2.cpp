#include<iostream>
using namespace std;

class GFG{
private:
    int priv;
protected:
    int prot;
public:
    GFG(){
        priv =1;
        prot =2;    
    }
    friend class F;
    void display(){
        cout << "The value of private member is: " << priv << endl;
        cout << "The value of protected member is: " << prot << endl;
    }

};

class F{
    public:
        void display(GFG t){
            t.priv = 20;
            cout << "The value of private member is: " << t.priv << endl;
            cout << "The value of protected member is: " << t.prot << endl;
        }
};

int main(){
    GFG g;
    F fri;
    fri.display(g);
    g.display();
}