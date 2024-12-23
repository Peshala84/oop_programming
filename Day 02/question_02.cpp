#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter your integer number : ";
    cin>>num;
    if (num>0){
        if(num%2==1){
            cout<<"Number is odd ";
        }
        else{
            cout<<"Number is even";
        }
    }
    else{
        cout<<"Enter greater than zero value";
    }

}