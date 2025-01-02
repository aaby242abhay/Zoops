#include<bits/stdc++.h>
using namespace std;

class abc{
    public:
    int sum;
    abc();
    abc(int a, int x = 0){              //if we will not pass x as a parameter it would automatically take it as x:
        sum = a + x;
        cout << "This is the parameterized constructor of the class abc with sum = " << sum << endl;
    }

};

int main(){
    abc a1(10,20);
    abc a2(5);
    return 0;

}