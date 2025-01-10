#include<bits/stdc++.h>
using namespace std;

class Test{
    private:                            //by making this private we can restrict the dynamic allocation of the memory in CPP
    // void* operator new(size_t size){
    //     cout << "New operator overloaded" << endl;
    // }
    // void* operator new[](size_t size){
    //     cout << "New operator overloaded for the array" << endl;
    // }
    public :
    void* operator new(size_t size){

        cout << "size is ----> " << size << endl;
        void* ptr = malloc(size);
        cout << "New operator overloaded" << endl;
        return ptr;
    }
};

int main(){
    // Test *t1 = new Test();
    // Test *t2 = new Test[10];
    Test* t2 = new Test();
    Test t1;
    cout << "Hello World of CPP" << endl;

    return 0;
}