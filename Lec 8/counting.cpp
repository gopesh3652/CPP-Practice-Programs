// Simple counting using function

#include<iostream>
using namespace std;

// Function signature

void printCounting(int n){

    // Function body
    cout << "Count till " << n << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i <<endl;
    }
    
}

int main(){
    int n;
    cout << "Enter n = " <<endl;
    cin >> n;

    // Function call
    printCounting(n);
    return 0;
}