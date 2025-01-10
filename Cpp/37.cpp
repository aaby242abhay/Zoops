#include<bits/stdc++.h>
using namespace std;

class Test{
    int x;
    public:
    void* operator new(size_t size);
    void operator delete(void* ptr);
    Test(int x = 0){
        this->x = x;
        cout << "Contructor called" << endl;
    }
    ~Test(){
        cout << "Destructor called" << endl;
    }
};
void* Test:: operator new(size_t size){
    cout << "New operator"
}

int main(){
    
}