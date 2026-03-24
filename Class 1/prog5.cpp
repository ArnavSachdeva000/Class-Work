#include<iostream>
using namespace std;
int main()
{
    int a=10;
    string name;
cout<<"\nEnter a & name:";
cin>>a;
cin.ignore();
getline(cin,name);
    cout<<"\n a= "<<a<<"\n name="<<name;
    return 0;
}