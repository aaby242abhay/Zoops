#include<iostream>
using namespace std;

class Complex{
    private:
        int real, img;

    public:
        Complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }
        void display(){
            cout << real << " + " << img << "i" << endl;
        }
    friend Complex add(Complex &c1, Complex &c2);
    friend Complex sub(Complex &c1, Complex &c2);

};
Complex add(Complex &c1, Complex &c2){
    return Complex(c1.real+c2.real, c1.img+c2.img);
}
Complex sub(Complex &c1, Complex &c2){
    return Complex(c1.real-c2.real, c1.img-c2.img);
}   

int main(){
    Complex c1(3, 7), c2(4, 8), c3;
    c3 = add(c1, c2);
    c3.display();
    c3 = sub(c1, c2);
    c3.display();
    return 0;

}