#include<bits/stdc++.h> 
using namespace std;

class Test{
    public:
    int *ptr;
    Test(){
        cout<<"Constructor called"<<endl;
        ptr = new int(10);
    }
    ~Test(){
        cout<<"Destructor called"<<endl;
        delete ptr;
    }
    Test(const Test& t){
        ptr = new int(*t.ptr);      //this is deep copy
    }
};

Test createObject(){            //Copy ellision or RVO (Return Value Optmisation) takes place, the destructor of temp is skipped due to Copy Ellision
    Test temp;
    cout << "Inside the create obj function" << endl;
    return temp;
}

int main(){
    Test t = createObject();        //compiler used the default copy constructor to copy the object
    // Test* t2 = new Test();
    // cout<< "we are here ---> " << *(t.ptr) <<endl;
    return 0;
}