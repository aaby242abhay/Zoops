// A program with virtual destructor
//this needs to be kept in mind
//output:
//Constructing base--> 1
//Constructing derived--> 2
//Constructing base--> 3
//Destructing base--> 4
//Destructing derived--> 5
//Destructing base--> 6

//first when the derivied class obj is made, the base class constructor(1) is called first and then the derived class constructor(2) is called
//then when the base class obj is made
//the base class constructor(3) is called
//then we try to destroy the base class obj first because it was made at last, so the base class destructor(4) is called first
//now we are trying to delete the derived object
//so the derived class destructor(5) is called first and then the base class destructor(6) is called


#include <iostream>

using namespace std;

class base {
public:
	base()	 
	{ cout << "Constructing base\n"; }
	virtual ~base()
	{ cout << "Destructing base\n"; }	 
};

class derived : public base {
public:
	derived()	 
	{ cout << "Constructing derived\n"; }
	~derived()
	{ cout << "Destructing derived\n"; }
};

int main(){
    derived d;
    base b;
    return 0;
}
