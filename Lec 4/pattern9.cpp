/*
1
21
321
4321
54321
*/

//Solution 1

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
            cout << value; // i-j+1
            value--;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}

//Solution 2

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
            cout << value; // i-j+1
            value--;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}