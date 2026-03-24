#include<iostream>
using namespace std;
void welcome(void)
{
    cout<<"Welcome!";
}
void welcome(string name)
{
    cout<<"\nWelcome "<<name;
}
int main()
{
    welcome();
    string name;
    cout<<"\nEnter your name: ";
    cin>>name;
    welcome(name);
    return 0;
}