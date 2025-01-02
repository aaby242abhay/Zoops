#include<bits/stdc++.h>
using namespace std;

class abc;
class xyz{
    int x;
    public:
        void set_data(int a){
            x = a;
        }
        friend void max(xyz, abc);
};
class abc{
    int y;
    public:
        void set_data(int a){
            y = a;
        }
        friend void max(xyz, abc);
};

void max(xyz t1, abc t2){       //this friend function can access the private members of the both the classes and can hence acts as a bridge between the two classes
    if(t1.x > t2.y){
        cout << t1.x << " is greater than " << t2.y << endl;
    }else{
        cout << t2.y << " is greater than " << t1.x << endl;
    }
}

int main(){
    abc a;
    xyz x;
    a.set_data(300);
    x.set_data(20);
    max(x, a);
    return 0;

}