#include<iostream>

using namespace std;

int main(){
    float radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    float a,b;
    float pi=3.14;
    a=4*radius*radius;
    b= 4/3*pi*radius*radius*radius;
    cout<<"Area of the circle is: "<<a<<endl;
    cout<<"Volume of the sphere is: "<<b<<endl;
    return 0;
}