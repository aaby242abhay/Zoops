#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int r, i;
    public:
    Complex(int r=0, int i=0) : r(r), i(i) {};
    void print(){
        cout << "Our complex no. is : " << r << " + " << i << "i" << endl;
    }
    friend Complex operator+(Complex const &c1, Complex const &c2);         //the global function is the friend of this function

};
Complex operator+(Complex const &c1, Complex const &c2){            //global method will require 2 objects
    return Complex(c1.r+c2.r, c1.i+c2.i);
}

int main(){
    Complex c1(1,2), c2(3,4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}