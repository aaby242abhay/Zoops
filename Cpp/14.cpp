#include<bits/stdc++.h>
using namespace std;

// class abc{
//     public:
//     int a;
//     char ch;
//     abc(int, char*);     // abc(int, char*);
//     // abc(const abc&);
// };

// abc::abc(int x, char* y){
//     a = x;
//     ch = *y;
// }

// abc::abc(const abc& obj){
//     a = obj.a;
//     cout << "This is the copy constructor being called" << endl;
// }

class String{
    private:
        char* s;
        int size;

    public: 
        String(const char* str = NULL);     //this is the constructor
        ~String(){ delete[] s;}             //this is the destuctor
        String(const String&);              //this is the copy constructor
        void print(){
            cout << s << endl;
        }
        void change(const char*);           //This is a function declaration
};

String::String(const char* str){

    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

void String::change(const char* str){
    delete[] s;
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

String :: String(const String& old_str){
    size = old_str.size;
    s = new char[size+1];
    strcpy(s, old_str.s);
}

//What will happen if we do not define the copy constructor in the above code?
//If we do not define the copy constructor in the above code, the default copy constructor will be called 
//which will make a shallow copy of the object. This will lead to a problem when the destructor is called
//The changes made to str2 will also be reflected in str1, which is not the desired behaviour
//if str1 is destroyed, the str2's data member will be calling to the deallocated memory

int main(){
    // String str1("Aaaby Abhay");
    // String str2 = str1;
    // str1.print();
    // str2.print();

    // str2.change("Aditi Singh");
    // str1.print();
    // str2.print();
    return 0;
}