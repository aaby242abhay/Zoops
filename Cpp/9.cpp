#include<bits/stdc++.h>
using namespace std;

class gfg{
    public:
    void call_function(){
        print();
    }
    void print(){
        cout << "I am currently in class g" << endl;
    }
};

class hfg : public gfg{             //we will have to use the public keyword here
    public:
    void print(){
        cout << "I am currently in class h"<< endl;
    }
};

class gfg2{
    public:
    virtual void print(){           //this is a virtual function, to override this function in the derived class, we will have to use the override keyword
        cout << "Printing inside the virtual function of the base class" << endl;
    }
    void call_function(){
        print();
    }
};

class hfg2 : public gfg2{
    public:
    void print() override{          //adding the override keyword here will make sure that the print function of the derived class is called
        cout << "Printing inside the derived class" << endl;
    }
};

int main(){
    gfg* g = new gfg();             //gfg g;
    g->call_function();             //g.call_fucntion();
    hfg* h = new hfg();              //hfg h;                      
    h->call_function();             //h.call_function();

    //we are tryig to call the print function of the derived class from the object h, but the print() from the base function gets call
    //this can be solved using the cpp virtual function

    gfg2 g2;
    g2.call_function();
    hfg2 h2;
    h2.call_function();

}