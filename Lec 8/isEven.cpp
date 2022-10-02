#include<iostream>
using namespace std;

//1 --> Even
//0 --> Odd

bool isEven(int a){
    //Odd
    if (a&1)
    {
        return 0;
    }
    else 
    return 1;
    
}

int main(){
    int a;
    cout << "Enter the number - "<<endl;
    cin >> a;
    if (isEven(a))
    {
        cout << "Number is even" <<endl;
    }
    else 
    cout << "Number is Odd" << endl;
    
    return 0;
}