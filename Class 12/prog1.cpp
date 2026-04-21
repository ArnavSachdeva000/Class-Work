#include <iostream>

class Shape {
public:
    virtual void display() const = 0;
    virtual int getWidth() const = 0;
    virtual int getLength() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    int width, length;

public:
    Rectangle(int w = 0, int l = 0) : width(w), length(l) {}

    int getWidth() const override { return width; }
    int getLength() const override { return length; }

    void display() const override {
        std::cout << "Width: " << width << ", Length: " << length << std::endl;
    }

    Rectangle operator-(const Rectangle& obj2) const {
        return Rectangle(width - obj2.width, length - obj2.length);
    }

    Rectangle operator+(int val) const {
        return Rectangle(width + val, length + val);
    }

    friend Rectangle operator+(int val, const Rectangle& obj);
};

Rectangle operator+(int val, const Rectangle& obj) {
    return Rectangle(obj.width + val, obj.length + val);
}

int main() {
    Shape* s1 = new Rectangle(5, 10);
    Shape* s2 = new Rectangle(67, 90);

    s1->display();
    s2->display();

    Rectangle& r1 = dynamic_cast<Rectangle&>(*s1);
    Rectangle& r2 = dynamic_cast<Rectangle&>(*s2);

    Rectangle r3 = r1 - r2;
    r3.display();

    r3 = 9 + r1;
    r3.display();

    delete s1;
    delete s2;
    return 0;
}