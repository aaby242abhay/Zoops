#include<bits/stdc++.h>
using namespace std;

class Test{
    public:
    Test(Test&){cout << "Copy constructor called\n";};
    Test(){cout << "Constructor called\n";};
    Test fun(){
        cout << "fun() called\n";
        Test t;
        return t;
    }
};

int main(){
    Test t1;
    Test t2 = t1.fun();
    Test* t3 = new Test(t1);
    return 0;

}