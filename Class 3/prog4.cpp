#include<iostream>
    using namespace std;
    void welcome(string name="User")
    {
        cout<<"\n Welcome "<<name;
    }
    //void welcome{string="User"}
    int main()
    { 
        welcome();//function call
        welcome("Section A");
        return 0;
    }
