#include <bits/stdc++.h>
using namespace std;

// Forward declaration
class ShapeVisitor;

// Element interface
class Shape {
public:
    virtual void accept(ShapeVisitor* v) = 0;
    virtual ~Shape() = default;
};

// Concrete Elements
class Square : public Shape {
public:
    void accept(ShapeVisitor* v) override;
};

class Rectangle : public Shape {
public:
    void accept(ShapeVisitor* v) override;
};

class Circle : public Shape {
public:
    void accept(ShapeVisitor* v) override;
};

// Visitor Interface
class ShapeVisitor {
public:
    virtual void visit(Square* s) = 0;
    virtual void visit(Rectangle* r) = 0;
    virtual void visit(Circle* c) = 0;
    virtual ~ShapeVisitor() = default;
};

// Accept implementations
void Square::accept(ShapeVisitor* v) {
    v->visit(this);
}

void Rectangle::accept(ShapeVisitor* v) {
    v->visit(this);
}

void Circle::accept(ShapeVisitor* v) {
    v->visit(this);
}

// Concrete Visitor
class AreaCalculator : public ShapeVisitor {
public:
    void visit(Square* s) override {
        cout << "Calculating area of Square" << endl;
    }

    void visit(Rectangle* r) override {
        cout << "Calculating area of Rectangle" << endl;
    }

    void visit(Circle* c) override {
        cout << "Calculating area of Circle" << endl;
    }
};

int main() {
    vector<Shape*> shapes;
    shapes.push_back(new Square());
    shapes.push_back(new Rectangle());
    shapes.push_back(new Circle());

    AreaCalculator areaCalc;

    for (auto shape : shapes) {
        shape->accept(&areaCalc);
    }

    for (auto shape : shapes) {
        delete shape;
    }

    return 0;
}
