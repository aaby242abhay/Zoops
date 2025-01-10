//A postfix ++ has a dummy parameter
#include<bits/stdc++.h> 
using namespace std;

class Complex{
    private :
    int r, i;
    public:
    Complex(int r = 0, int i=0): r(r), i(i) {};
    void print(){
        cout << "Our complex no is : " << r << " + " << i << "i" << endl;
    }
    Complex operator++(int);     //this is the pre_fix overloaded operator
    Complex& operator++();      //this is the post_fix overloaded operator  

};
Complex& Complex:: operator++(){
    r++; i++;
    cout << "This is prefix" << endl;
    return *this;
}
Complex Complex:: operator++(int dummy){
    cout << "This is postfix" << endl;              //we are returning the currect value first, and then trying to increase the value of the currect object
    Complex temp(r, i);
    r++; i++;
    temp.r = -12342;
    return temp;
}
int main(){
    Complex c1(1,2), c2(3,4);
    Complex c3 = c1++;
    c1.print();
    c3.print();
    cout << "----------------" << endl;
    c2.print();
}