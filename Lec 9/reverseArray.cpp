// Reverse an array

/*

#include <bits/stdc++.h>
using namespace std;

int reverse(int arr[], int size)
{
    int temp;
    int len = size;
    for (int i = 0; i < len / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i];
        arr[size - i] = temp;
    }

    return 0;
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int arri[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Array1 = " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;
    // cout << "Enter size - " <<endl;

    // int size;
    // cin >> size;

    reverse(arr, 10);

    cout << "Reversed array = " << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Array2 = " << endl;

    for (int i = 0; i < 9; i++)
    {
        cout << arri[i] << " ";
    }

    cout << endl;
    cout << endl;

    reverse(arri, 9);
    cout << "Reversed array = " << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arri[i] << " ";
    }
    cout << endl;
    cout << endl;

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return ;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int brr[6] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    cout << endl;

    reverse(arr, 5);
    reverse(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
}