// Calculate simple interest
#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter the principle amount : ";
    cin>>p;
    cout<<"Enter the rate : ";
    cin>>r;
    cout<<"Enter the given time : ";
    cin>>t; 
    float si = (p*r*t)/100;
    cout<<"Simple interest is : "<<si;
    // cout<<si;
}