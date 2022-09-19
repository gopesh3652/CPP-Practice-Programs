/*
****
 ***
  **
   *
 */ 

#include<iostream>
using namespace std;

int main(){
    int i = 1, n;
    cout << "Enter the number - "<<endl;
    cin >>n;
    while(i <= n){
        int space = 1;
        int j = i;
        while(space < i){
            cout << " ";
            space++;
        }
        while(j <= n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}