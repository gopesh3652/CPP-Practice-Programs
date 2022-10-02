#include<iostream>
using namespace std;

int main(){
    int num = 2;
    char ch = '1';
    switch (ch)
    {
    case 1: cout << "First" <<endl;
        break;
    case '1': cout << "Second" <<endl;
        break;
    default: cout << "This is default case" <<endl;
    }
    
    return 0;
}