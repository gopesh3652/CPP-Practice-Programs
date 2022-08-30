//to check whether a number is prime or not using while loop
#include<iostream>
using namespace std;

int main(){
    int i = 1, n, count = 0;
    cout << "Enter the number - "<< endl;
    cin >> n;
    while (n%i==0)
    {
        count++;
        i++;
    }
    if (count >=2)
    {
        cout << "Number is Not Prime." <<endl;  
    }
    else
    {
        cout << "Number is Prime"<< endl;
    }
    
    return 0;
}