//Prashant bajpai
//23070123102
// simple calculator 
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,sum,difference,multiplication;
    float division; 
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter 2nd number: ";
    cin>>n2;
    sum=n1+n2;
    difference=n1-n2;
    multiplication=n1*n2;
    division=n1/n2;
    cout<<"The sum of "<<n1<<" and "<<n2<<" is: "<<sum<<endl;;
    cout<<"The difference of "<<n1<<" and "<<n2<<" is: "<<difference<<endl;
    cout<<"The multiplication of "<<n1<<" and "<<n2<<" is: "<<multiplication<<endl;
    cout<<"The division of "<<n1<<" and "<<n2<<" is: "<<division<<endl;
    return 0;
}
