#include<bits/stdc++.h>
using namespace std;

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

int main(){
    String str1("Aaaby Abhay");
    String str2 = str1;
    str1.print();
    str2.print();

    str2.change("Aditi Singh");
    str1.print();
    str2.print();
    return 0;
}