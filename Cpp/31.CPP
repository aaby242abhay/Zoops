//this can be a very good example of operator overloading

#include<bits/stdc++.h>
using namespace std;

class C{
    private:
    int real, imag;
    public:
    C(int x =0, int y = 0): real(x), imag(y) {};
    void print(){
        cout << "Our complex no is : " << real << " + " << "i" << imag  << endl;
    }
    C operator+(C const &obj){
        C res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    C operator- (C const &obj){
        C res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }

    
};
int main(){
    C c1(10, 20);
    C c2(30, 40);
    C c3 = c1 +c2;
    c3 = c3 + c2;
    c3.print();
    c3 = c1 - c2;
    c3.print();

    return 0;
}