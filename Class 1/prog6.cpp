#include<iostream>

using namespace std;

int main()
{

    int a,b,c;

    cout<<"Enter marks of first student:";
    cin>>a;
    cout<<"Enter marks of second student:";
    cin>>b;
    cout<<"Enter marks of third student:";
    cin>>c;

    double sum = (a+b+c)/3.0;

    cout<<"The average of the marks of three students is:"<<sum;
    return 0;
    
}