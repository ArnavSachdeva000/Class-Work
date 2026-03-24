// swap(int,int) swaps the value of two integers
#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int x=10,y=20;
    cout<<"Before swapping: "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swapping: "<<x<<" "<<y<<endl;
    return 0;
}



