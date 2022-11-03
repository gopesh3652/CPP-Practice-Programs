
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] >= key)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main() {
    int even[6] = {2, 4, 6 ,7, 8 ,13};
    int odd[5] = {1, 4 , 6, 8, 10};

    int evenIndex = binarySearch(even, 6, 13);
    cout << "Index of 13 is " << evenIndex <<endl;

    int oddIndex = binarySearch(odd, 5, 1);
    cout << "Index of 1 is " << oddIndex <<endl;
}