#include<iostream>
using namespace std;

class Person{
    char name[20];
    int id;
    public:
    void getDetails(){
        cout << "getDetails function of the Person class" << endl;
    }
};

int main(){
    Person p1;
    p1.getDetails();
    return 0;
}


