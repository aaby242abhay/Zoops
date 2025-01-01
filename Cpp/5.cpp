#include<bits/stdc++.h>
using namespace std;

class base{
    public :
    void func(int t);

};

void base::func(int t){
    cout << "The value of t is : " << t << endl;
};

int main(){
    base b;
    b.func(01);
    return 0;
}