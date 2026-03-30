#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor A" << endl;
    }

    ~A() {
        cout << "Destructor A" << endl;
    }

    void displayA() {
        cout << "This is class A" << endl;
    }
};

class B : virtual public A {
public:
    B() {
        cout << "Constructor B" << endl;
    }

    ~B() {
        cout << "Destructor B" << endl;
    }

    void displayB() {
        cout << "This is class B" << endl;
    }
};

class C : virtual public A {
public:
    C() {
        cout << "Constructor C" << endl;
    }

    ~C() {
        cout << "Destructor C" << endl;
    }

    void displayC() {
        cout << "This is class C" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "Constructor D" << endl;
    }

    ~D() {
        cout << "Destructor D" << endl;
    }

    void displayD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    D obj;

    obj.displayA();
    obj.displayB();
    obj.displayC();
    obj.displayD();

    return 0;
}