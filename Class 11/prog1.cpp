#include<iostream>
using namespace std;
class Rectangle:public shape
{
    int length; int width;
    public:
    Rectangle(int l=5,int w=10):lenght(l),width(w)
    {
        cout<<"\n Rectangle object created";
    }
    void area()
    {
        cout<<"\n Area of rectangle is "<<length*width;
    }
}