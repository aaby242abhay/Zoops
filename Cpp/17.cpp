#include<bits/stdc++.h>
using namespace std;

class DynamicArray{
    private:
    int size;
    int* arr;
    public:
    DynamicArray(int n):size(n){
        arr = new int[size];
        cout << "Dynamic Array of size" << size << " created\n";
    }
    ~DynamicArray(){
        delete[] arr;   
        cout << "Dynamic Array of size" << size << " destroyed\n";
    }
    void fillArray(){
        for(int i = 0; i < size; i++){
            arr[i] = i;
        }
    }
    void printArray(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    DynamicArray d1(5);
    d1.fillArray();
    d1.printArray();
    return 0;
}

/*
Output: What will happen if we use the default destructor?
Default Destructor:
The compiler will automatically generate a default destructor for the class DynamicArray.
However, this destructor will not free the dynamically allocated memory (arr).

Memory Leak:
Since the dynamically allocated memory is not released, the program will have a memory leak.
The memory allocated by new[] will remain in use even after the object goes out of scope, reducing available memory for other processes.

*/