//friendShip is not inherited in cpp
#include <iostream>
using namespace std;

class abc{
    private:
    int a;

    public: 
    abc(){
        a = 10;
    }
    friend void show();
};
class xyz : public abc{
    private:
    int x;
    
    public:
    xyz(){
        x = 20;
    }
};

void show(){
    xyz obj;
    cout << "a: " << obj.a << endl;
    // cout << "x: " << obj.x << endl;       //friendship is not inherited in cpp, uncommenting this line will give error
}

int main(){
    show();
    return 0;

}