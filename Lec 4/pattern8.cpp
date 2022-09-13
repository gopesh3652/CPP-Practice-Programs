/*
1
23
345
4567
56789
*/

//Solution 1
/*  
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number - "<<endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value;
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}
*/

//Solution 2  Homework