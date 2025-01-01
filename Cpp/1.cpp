#include<iostream>
using namespace std;

class person{
    char name[20];
    int id;
    public:
    void getDetails(){
        cout << "getDetails function of the Person class" << endl;
    }
};

int main(){
    person p1;
    p1.getDetails();
    return 0;
}


