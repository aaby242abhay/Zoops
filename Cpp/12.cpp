#include<bits/stdc++.h>
using namespace std;

class abc{
    private:
    abc(){
        cout << "This is the private constructor of the class abc" << endl;
    }
    void run() {cout << "Runnig in the background...." << endl;}
    public:
    friend class xyz;

};

class xyz{
    public : 
    xyz(){
        abc a;
        a.run();
        cout << "This is the public constructor of the class xyz" << endl;
    }
};

int main(){
    xyz x;
    return 0;   

}