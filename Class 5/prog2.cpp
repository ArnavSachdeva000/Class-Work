// swap(float,float) swaps the value of two floats
#include<iostream>
using namespace std;
void swap(float a,float b)
{
    float c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    float x=10.5,y=20.5;
    cout<<"Before swapping: "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swapping: "<<x<<" "<<y<<endl;
    return 0;
}