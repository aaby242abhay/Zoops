#include<bits/stdc++.h>
using namespace std;

class Test{
    private:
    int x, y;
    public:
    Test(int x, int y){
        this->x = x;
        this->y = y;
    }
    Test setX(int a){
        cout << "setX" << endl;
        x = a;
        return *this;
    }
    Test setY(int b){
        cout << "setY" << endl;
        y = b;
        return *this;
    }
    void print(){
        cout << "x = " << x << " y = " << y << endl;
    }
};

//Static and "this pointer" do not go side by side//

int main(){
    Test t(10, 20);
    t.setX(30).setY(40);        //this way we can chain the two functions at each one of them are returning the reference of the object
    t.print();
    return 0;
}

/*
Key Observations:
Return by Value (Test):

When setX returns *this with the return type Test, a copy of the object is created and returned.
The subsequent call to setY operates on the copied object, not the original one (t).
Therefore, changes made in setY are applied to the copy, not the original object.
Solution: Return by Reference (Test&):

To modify the same object and enable proper method chaining, the return type should be Test&.
Returning Test& ensures that *this (a reference to the current object) is returned, avoiding unnecessary copying.


Test t(10,20);
t.setX(30).setY(40); 

if  Test& setX(){}          (1)
    Test& setY(){}
then 
    output : x = 30 y = 40
else if
    Test setX(){}           (2)
    Test setY(){}
then    
    output : x = 30 y = 20

in (2) the setX() returns a copy of the object and the setY() operates on the copied object, not the original one(t)
in(1) the setX() returns the reference of the object and the setY() operates on the original object(t)


*/