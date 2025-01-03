#include<bits/stdc++.h>
using namespace std;

class Test{
    public:
    int* ptr;
    Test(int val){
        cout << "Constructor called" << endl;
        ptr = new int(val);
    }
    ~Test(){
        cout << "Destructor called" << endl;
        delete ptr;
    }
    Test(const Test&);              //this is copy constructor
};

Test::Test(const Test& t){
    cout << "Copy constructor is being called rather than the default constructor" << endl;
    ptr = new int(*(t.ptr));
}

int main(){
    // Test* t1 = new Test(10);
    // Test* t2 = t1;    
    // *t1->ptr = 199;
    // cout << *(t1->ptr) << " " << *(t2->ptr) << endl;             //output :  199 199

    Test t1(10);
    Test t2 = t1;
    *t1.ptr = 199;
    cout << *(t1.ptr) << " " << *(t2.ptr) << endl;             //output :  199 10
    return 0;
}