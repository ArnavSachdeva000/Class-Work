// Creating string in C++

#include<iostream>
#include<string>
using namespace std;

int main() 
{

    string x;

    cout << "Enter your full name: "; 
    // Enter the name: Arnav Sachdeva <3
    getline(cin, x); // For proper string handling use getline

    cout << "\nYour name is: " <<x<<"\n";
    
    return 0;

}

// Wow string was created and my name was outputted using  <3 <3 <3