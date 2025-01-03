#include<bits/stdc++.h> 
using namespace std;

class Test{
    public:
    int *ptr;
    Test(int val){
        cout<<"Constructor called"<<endl;
        ptr = new int(val);
    }
    ~Test(){
        cout<<"Destructor called"<<endl;
        delete ptr;
    }
};
int main(){
    // Test* t1 = new Test(10);
    // Test t2 = *t1;       //this is a shallow copy, so the destructor will be called twice, and the program will crash
    // cout << *(t1->ptr) << " " << *(t2.ptr) << endl;
    Test* t1 = new Test(299);
    Test* t2 = t1;
    cout << *(t1->ptr) << " " << *(t2->ptr) << endl;
    /*
    if we delete t1 and t2, it will result in deletion of the same pointer twice, and the program will crash
    */
   cout << t1 << " " << t2 << endl;
   cout << &t1 << " " << &t2 << endl;
    return 0;

}

/*
Test t1;
Test t2 = t1;
They will point to the same memory location, and when the destructor is called, it will be called twice, and the program will crash.
*/