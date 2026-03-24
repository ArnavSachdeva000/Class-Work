#include<iostream>
using namespace std;

int sum(int,int);
float sum(float,float);
double sum(double,double);

int main()
{
    float f1,f2;

    cout<<"\n sum: "<<sum(113,15);
    cout<<"\n sum:"<<sum(113.567,15.789);
    cout<<"\n sum:"<<sum(13.567f,15.789f);
    return 0;
}
int sum(int n1,int n2)
{
    cout<<"\n int sum:";
    return (n1+n2);
}
float sum(float n1, float n2)
{
    cout<<"\n float sum:";
    return (n1+n2);
}
double sum(double n1, double n2)
{
    cout<<"\n double sum:";
    return (n1+n2);
}