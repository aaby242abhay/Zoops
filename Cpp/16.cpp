#include<bits/stdc++.h>
using namespace std;

static int cnt = 0;
class Test{
    public:
    Test(){
        cnt++;
        cout << "Constructor called for cnt = " << cnt << endl;
    }
    ~Test(){
        cnt--;
        cout << "Destructor called for cnt = " << cnt << endl;
        
    }
};
int main(){
    Test T1, T2;
    {Test t1;}          //the destructor is called when the object goes out of scope
    {Test t2;}
    return 0;
}