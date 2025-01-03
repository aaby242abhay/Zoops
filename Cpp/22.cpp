//YES ---> contructors can be private as well
//1. Class to be instantiated only by a friend function, not by anyone else.
//2. SINGELTON design pattern --> system is driven by a single object

//3. NAMED CONTRUCTOR IDIOM

#include<bits/stdc++.h>
using namespace std;

class Point{
    private:
    float x,y;
    Point(float x, float y):x(x),y(y){}       //this is a named constructor

    public:
    static Point Polar(float, float);
    static Point Rectangular(float, float);
    void display();

};
void Point::display(){
    cout << "x: " << x << " y: " << y << endl;
}
Point Point::Rectangular(float x, float y){         //since they are static methods they can call the privat constructors;
    return Point(x,y);
}
Point Point :: Polar(float x, float y){
    return Point(x*cos(y), x*sin(y));
}

// class A{
//     private:
//     A(){
//         cout<<"Constructor called"<<endl;
//     }
//     friend class B;         //this makes sure that the object can only be made by the friend class B only
// };
// class B{
//     public:
//     B(){
//         A a;
//     }
// };
int main(){
    // B b;
    // return 0;

}