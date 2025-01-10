//concatinating 2 srings using "+" operator in cpp
#include<bits/stdc++.h>
using namespace std;

class str{
    private:
    string s;
    public:
    str(string s = ""): s(s) {};
    void print(){
        cout << s << endl;
    }
    str operator+(str const &obj){
        str temp(this->s + obj.s);
        return temp;
    }


};

int main(){
    str s1("Aaby");
    str s2(" Abhay");
    str s3 = s1 + s2;
    s3.print();
    return 0;
}