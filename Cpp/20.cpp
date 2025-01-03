#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    base(){
        cout << "Constructing base\n";
    }
    virtual ~base(){                    //MARK THIS BASE CLASS DESTRUCTOR AS VIRTUAL to be called later
        cout << "Destructing base\n";
    }
};

class derived: public base{
    private:
    int *m_array;
    public:
    derived(){
        m_array = new int[5];
        cout << "Constructing derived\n";
    }
    ~derived(){
        delete[] m_array;
        cout << "Destructing derived\n";
    }

};

int main(){
    base* b = new base();
    delete b;
    cout << "-------------------\n";
    derived* d = new derived();
    delete d;
    cout << "-------------------\n";
    base* poly = new derived();
    delete poly;
}
/*
Constructing base
Destructing base
-------------------
Constructing base
Constructing derived
Destructing derived             //this is being missed
Destructing base
-------------------
Constructing base
Constructing derived
Destructing base

Without the virtual destructor the descructor of the derived class is not called when the base class pointer is used to delete the derived class object
When a destructor isdeclared virtual it will end up calling both, the base one as well as the overridden one


WITH VIRTUAL 

Constructing base
Destructing base
-------------------
Constructing base
Constructing derived
Destructing derived
Destructing base
-------------------
Constructing base
Constructing derived
Destructing derived
Destructing base

*/