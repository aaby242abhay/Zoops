//when we make the destructor private,
//only the dynamic objects can be created
//make a function a friend of this class ans ask that function to delete the object----> ONLY THIS FRIEND FUNCTION WILL BE ABLE TO CALL THE DESTRUCTOR

#include<bits/stdc++.h>
using namespace std;


class T{
    private:  
    ~T(){
        cout<<"Destructor called"<<endl;
    }
    public:
    void destroyInstance(){
        delete this;        //this is another way to call the private destructors
    }
    friend void destroy(T* t);
};   


//first_way
void destroy(T* t){             //this is how you can call the destructor when the object is created dynamically and destructor is private
    delete t;
}

//second_way
// creating a class instance method that has access to the private destructor



int main(){
    // T t;                         //we connot do this, as this could not be destructed because the destructor is private

    T* t = new T;                   //we can very well do this, because this is not being destructed here, it is being destructed in the destructor
    destroy(t);

    // T* t2 = (T*)malloc(sizeof(T));  //this is also valid, but this is not calling the constructor, so this is not a good practice
    // delete t2;                   //this is not valid, because we have not called the constructor, so we cannot call the destructor
    // delete t;
    return 0;
}

//It is the programmers responsibility to create dynamically created objects

/*
The primary difference between Test t; and Test* t = new Test(); lies in memory allocation and lifetime management:

1. Test t; (Stack Allocation)
Memory Allocation: The object t is allocated on the stack.
Lifetime Management: The object's lifetime is automatically managed. It is destroyed when it goes out of scope (e.g., at the end of the function where it is declared).
Performance: Stack allocation is faster and more efficient because it doesn't involve calls to the dynamic memory allocator (new).
Usage: Use this when you don't need the object to persist beyond its scope.

2. Test* t = new Test(); (Heap Allocation)
Memory Allocation: The object t is allocated on the heap.
Lifetime Management: You are responsible for managing the object's lifetime. You must explicitly call delete t; to release the memory; otherwise, it leads to a memory leak.
Performance: Heap allocation is slower due to the overhead of dynamic memory management.
Usage: Use this when you need the object to persist beyond the current scope or need to manage its lifetime explicitly.

*/