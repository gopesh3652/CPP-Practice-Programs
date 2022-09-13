/*
1234
1234
1234
1234
*/
/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number - " <<endl;
    cin >> n;
    int i = 1;
    while (i <= n )
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}*/

/*
321
321
321
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number - " <<endl;
    cin >> n;
    int i = 1;
    while (i <= n )
    {
        int j = n;
        while (j >= 1)
        {
            cout << j; //n-j+1
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}