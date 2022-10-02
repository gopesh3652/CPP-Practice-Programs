#include<iostream>
using namespace std;

int main(){
    int a, b;
    char calc;
    cout << "Enter the operation - "  <<endl;
    cin >> calc;
    cout << "Enter the numbers a and b" <<endl;
    cin >> a >> b;
    switch (calc)
    {
    case '+':
        cout << (a + b);
        break;
    case '-':
        cout << (a - b);
        break;
    case '*':
        cout << (a * b);
        break;
    case '/':  
        cout << (a / b);
        break;    
    case '%':
        cout << (a % b);
        break;
    default:
    cout << "Invalid Operation" <<endl;
    }  
    return 0;
}