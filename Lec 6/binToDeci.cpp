// Conversion from binary to decimal

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, i = 0;
    int ans = 0;
    cout << "Enter the number - " <<endl;
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        } 
        n = n/10;
        i++;
    }
    
    cout << "Answer is = " << ans <<endl;
    return 0;
}