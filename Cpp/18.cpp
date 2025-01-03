#include <iostream>
using namespace std;
 
int i = 69;
 
class A
{
public:
    ~A()
    {
        i=10;
    }
};
 
int foo()
{
    i=3;
    A ob;
    return i;           //first the value of 'i' is copied in the return statement, and when the function call ends then the destructor is called and i = 10;
}
 
int main()
{
    cout << i << endl;
    cout << foo() << endl;
    cout << i << endl;
    return 0;
}

/*
In the above program, id is a static variable and it is incremented with every object creation.
Object a[0] is created first, but the object a[2] is destroyed first. Objects are always destroyed in reverse order of their creation. 
The reason for reverse order is, an object created later may use the previously created object. For example, consider the following code snippet.
A a;
B b(a);
In the above code, the object ‘b’ (which is created after ‘a’), may use some members of ‘a’ internally. 
So destruction of ‘a’ before ‘b’ may create problems. Therefore, object ‘b’ must be destroyed before ‘a’.
*/