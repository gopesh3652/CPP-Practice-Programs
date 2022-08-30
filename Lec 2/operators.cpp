//Operators

#include<iostream>
using namespace std;

int main(){
      
    // float/int = float

    //Arithmetic operators

    // int a = 2.0/5;
    // cout << a << endl;
    // cout << 2.0/5 << endl;

    //Relative operators

    int b = 2, c = 3;
    bool first = (b==c);
    cout << first << endl;

    bool second = (b>c);
    cout << second << endl;

    bool third = (b<c);
    cout << third << endl;

    bool fourth = (b>=c);
    cout << fourth << endl;

    bool fifth = (b<=c);
    
    cout << fifth << endl;

    bool sixth = (b!=c);
    cout << sixth << endl;

    //Logical operators (&&, ||, !)

    int d = 23;
    cout << !d <<endl;
    
    return 0;
}