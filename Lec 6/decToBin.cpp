// Conversion from decimal to binary 

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int ans = 0, n, bit, i = 0;
    cout << "Enter the number - " <<endl;
    cin >> n;

    while (n != 0)
    {
        bit = n & 1;
        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }
    cout << "Answer is "<< ans <<endl;
    return 0;
}