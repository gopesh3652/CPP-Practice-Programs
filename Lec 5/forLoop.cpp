#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number - " <<endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i <<endl;
    }
    

    for (int i = 0, j = 1; i >= 0, j >= 1; i--, j-- )
    {
        cout << i << " " << j;
    }
    
    return 0;
}