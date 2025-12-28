#include <iostream>

// Base class
class Rectangle {
protected:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    virtual double area() const {
        return width * height;
    }

    virtual void setWidth(double w) {
        width = w;
    }

    virtual void setHeight(double h) {
        height = h;
    }
};

// Derived class
class Square : public Rectangle {
public:
    Square(double size) : Rectangle(size, size) {}

    void setWidth(double w) override {
        width = height = w;
    }

    void setHeight(double h) override {
        width = height = h;
    }
};
