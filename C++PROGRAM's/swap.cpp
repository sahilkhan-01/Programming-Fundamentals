#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"before swapping a:"<<a<<endl;
    cout<<"before swapping b:"<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping a:"<<a<<endl;
    cout<<"after swpping b:"<<b<<endl;
    return 0;
}