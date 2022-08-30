// Find if a number is +, -, or 0;
#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the input number - "<<endl;
    cin >> a;
    if (a > 0)
    {
        cout << "Number is positive" <<endl;
    }
    else{
        if (a == 0)
        {
            cout << "Input is 0"<<endl;
        }
        else
        cout << "Number is negative"<<endl;
    }
    return 0;
}