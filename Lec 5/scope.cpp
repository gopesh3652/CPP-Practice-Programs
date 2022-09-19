#include<iostream>
using namespace std;

int main(){
    int a = 5;
    cout << a <<endl;
    if(true){
        int a = 10;
        cout << a << endl;
        int b = 15;
        cout << b << endl;
    }
    cout << a <<endl;
    int b = 20;
    cout << b << endl;
    return 0;
}