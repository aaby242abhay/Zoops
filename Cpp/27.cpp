#include<bits/stdc++.h>
using namespace std;

class test{
    public:
    int val;
    test(int v = 10) : val(v){
        cout << "static object is beign created" << endl;
    }
};

class A{
    public:
    static test t;
    A(){
        cout << "A's constructor" << endl;
    }
};
test A::t = test(14);

class B : public A{
    public:
    int a = 5;
    B(){
        
        cout << "static members are not inherited: " << A::t.val << endl;
        cout << "this-----> " << this << endl;

    }
};

int main(){
    cout << A::t.val << endl;
    A a;
    a.t.val = 20;
    cout << A::t.val << endl;   
    // B b;                 //this = &b
    B* b = new B();
    cout << "b ---> " << b << endl;

}