// Sum of n numbers using while loop
/*#include<iostream>
using namespace std;

int main(){
    int n, i = 1, sum = 0;
    cout << "Enter the number n - "<<endl;
    cin >> n;
    while (i <= n)
    {
        sum +=i;
        i++;
    }
    cout <<"Value of sum is = " << sum;
    return 0;
}*/

//Sum of n even numbers

#include<iostream>
using namespace std;

int main(){
    int n, i = 2, sum = 0;
    cout << "Enter the number n - "<<endl;
    cin >> n;
    while (i <= n)
    {
        sum +=i;
        i+=2;
    }
    cout <<"Value of sum is = " << sum;
    return 0;
}