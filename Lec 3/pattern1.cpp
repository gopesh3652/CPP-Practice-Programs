/* 
    ****
    ****
    ****
    ****
*/
#include<iostream>
using namespace std;

int main(){
    int n, i = 1/*, j = 1*/;
    cout << "Enter the number - " <<endl;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}
