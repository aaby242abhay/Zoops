#include<bits/stdc++.h>
using namespace std;

class test{
    public:
    const static int z = 2;                      //only static const data members of integral type can be initialized inside a class
    static int x;
    // const static float y = 2.4;              //float const static data members cannnot be initalized

    static inline float y =  10;                //but they can be declared with the inline keyword

    test(){
        cout << x << endl;
        cout << z << endl;
        cout << y << endl;
    }
};
int test::x = 2;

int main(){
    // test t;                  //we do not need to make the instance of class to acces the static data members of that class
    test t2;
    cout << test::x << endl;    
    cout << t2.x << endl;       //obj.static_member
    return 0;
} 