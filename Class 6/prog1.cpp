/* C++ program demonstrating a class with a default constructor, parameterized constructor, and a display function*/

#include<iostream>
using namespace std;

int main()
{
#include <iostream>
using namespace std;

class A
{
    int a1;
    int a2;

public:
    A()
    {
        cout << "\n Default";
        a1 = 0;
        a2 = 0;
    }

    A(int a 1, int v2)
    {
        this->a1 = a1;
        a2 = v2;
    }

    void display()
    {
        cout << "\n a1= " << a1 << "\n a2=" << a2;
    }
}

int main()
{
    A obj1, obj2(20, 45);

    obj1.display();
    obj2.display();

    return 0;
}
}