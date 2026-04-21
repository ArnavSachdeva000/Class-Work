#include <iostream>
using namespace std;

class Box {
    double length, breadth, height;
    static int count;

public:
    Box(double l = 2.0, double b = 2.0, double h = 2.0) {
        length = l;
        breadth = b;
        height = h;
        count++;
    }

    double Volume() {
        return length * breadth * height;
    }

    void display() {
        cout << "\nlength " << length
             << "\nbreadth " << breadth
             << "\nheight " << height;
        cout << "\nvolume " << Volume();
        cout << "\nobject count " << count << endl;
    }
};

int Box::count = 0;

int main() {
    Box Box1(3.3, 1.2, 1.5);
    Box1.display();

    Box Box2(8.5, 6.0, 2.0);
    Box2.display();

    return 0;
}