//using getters and setters to access the private members of the class
#include<bits/stdc++.h>
using namespace std;

class Circle{
    private:
    float radius;
    float area;

    public:
    void getRadius(){
        cout << "Enter the radius of the circle: ";
        cin >>  radius;
    }
    void findArea(){
        area = 3.14 * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }
};
int main(){
    Circle c;
    c.getRadius();
    c.findArea();
    return 0;
}