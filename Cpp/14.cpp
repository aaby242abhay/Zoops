#include<bits/stdc++.h>
using namespace std;

class String{
    private:
        char* s;
        int size;

    public: 
        String(const char* str = NULL);
        ~String(){ delete[] s;}
        String(const String&);
        void print(){
            cout << s << endl;
        }
        void change(const char*);
};

String::String(const char* str){
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}


int main(){

}