/*
    1
   121
  12321
 1234321
123454321
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter the number -" << endl;
    cin >> n;
    while (i <= n)
    {
        // Print space
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        //Print first triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        //Print second triangle
        int k = i - 1;
        while (k)
        {
            cout << k;
            k--;
        }
        
        cout << endl;
        i++;
    }

    return 0;
}