#include<iostream>

using namespace std;

int main(){

    int temp;
    cout<<"Enter the Temperature : ";
    cin>>temp;

    if(temp<50){
        cout<<"Expression is valid............."<<endl;
        if(temp<30){
            cout<<"Wear the down jacket 1";
        }
        else{
            cout<<"No need to worry";
        }
    }else{
        cout<<"Input is invalid..........";
    }

}
