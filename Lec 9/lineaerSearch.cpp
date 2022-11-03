#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    
    return 0;
}

int main(){

    int arr[10] = { 2, 6, -8, 9, -21, 55, 20, 1, 0, 9};

    cout << "Enter the element to search for - " <<endl;
    
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Element is present." << endl;
    }
    else cout << "Element is not present." << endl;
    
    return 0;
}