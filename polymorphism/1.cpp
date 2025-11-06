/*#include<iostream>
using namespace std;
class Shape {
public:
virtual ~Shape() = default;
virtual double get_surface() const = 0;
virtual void describe_object() const { std::cout << "this is a shape" << std::endl; }
double get_doubled_surface() const { return 2 * get_surface(); }
};
class Square : public Shape {
Point top_left;
double side_length;
public:
Square (const Point& top_left, double side)
: top_left(top_left), side_length(side_length) {}
double get_surface() override { return side_length * side_length; }
void describe_object() override {
std::cout << "this is a square starting at " << top_left.x << ", " << top_left.y
<< " with a length of " << side_length << std::endl;
}
};*/
#include <iostream>

struct Point {
    double x, y;
    Point(double x = 0, double y = 0) : x(x), y(y) {}
};

class Shape {
public:
    virtual ~Shape() = default;
    virtual double get_surface() const = 0;
    virtual void describe_object() const {
        std::cout << "This is a shape" << std::endl;
    }
    double get_doubled_surface() const {
        return 2 * get_surface();
    }
};

class Square : public Shape {
    Point top_left;
    double side_length;
public:
    Square(const Point& top_left, double side) : top_left(top_left), side_length(side) {}
    double get_surface() const override {
        return side_length * side_length;
    }
    void describe_object() const override {
        std::cout << "This is a square starting at (" << top_left.x << ", " << top_left.y << ") with a side length of " << side_length << std::endl;
    }
};

int main() {
    Point p(1, 2);
    Square s(p, 4);
    s.describe_object();
    std::cout << "Surface area: " << s.get_surface() << std::endl;
    std::cout << "Doubled surface area: " << s.get_doubled_surface() << std::endl;
    return 0;
}

