#include<bits/stdc++.h>
using namespace std;

class Example{
    private: 
    string* data;
    
    public: 
    //default constructor
    Example(string value = ""){
        data = new string(value);
        cout << "This is the default constructor being called" << endl;
    }

    //Copy constructor
    Example(Example &other){
        data = new string(*other.data);             //creating a deep copy of the data
        cout << "This is the copy constructor being called" << endl;
    }

    //Move constructor
    Example(Example&& other) noexcept {
        data = other.data;          //stealing the pointer
        other.data = nullptr;       //nulling the other object
        cout << "This is the move constructor being called" << endl;
    }

    ~Example(){
        if(data){
            cout << "Deleting data" << endl;
            delete data;
        }else{
            cout << "Data is already nullptr" << endl;
        }
    }
    void display() const{
        cout << "Data: " << (data ? *data : "nullptr") << endl;
    }

};

int main(){
    Example obj1("Hello");
    Example obj2 = obj1;          //copy constructor
    obj2.display();
    Example* obj4 = new Example(obj1);   //copy constructor

    Example obj3 = move(obj1);    //move constructor
    obj3.display();
    obj1.display();

}