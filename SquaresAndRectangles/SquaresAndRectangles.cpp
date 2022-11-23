#include <iostream>
#include <vector>

using namespace std;

struct Shape {
    virtual float square();
};

struct Triangle : public Shape {
    float a, b, c;
    float square() override{
        float s = (float)(a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};
struct Circle : public Shape {
    float r;
    float square() override {
        return 3.14 * r * r;
    }
};
struct Line : public Shape {
    float length;
    float square() override {
        return 0;
    }
};
struct Rectangle : public Shape {
    float a, b;
    float square() override {
        return a*b;
    }
    void set_sides(float a1, float b1) {
        a = a1;
        b = b1;
    }
};
struct Square : public Rectangle {
    float square() override {
        return a * a;
    }
    void set_sides(float a1, float b1) {
        // what to do?
    }
};

//struct Square : public Shape {
//    float a;
//    float square() override {
//        return a * a;
//    }
//    void set_side(float a1) {
//        a = a1;
//    }
//};
//struct Rectangle : public Square {
//    float b;
//    float square() override {
//        return a * b;
//    }
//    void set_sides(float a1, float b1) {
//        a = a1;
//        b = b1;
//    }
//};
//struct Triangle : public Rectangle {
//    float c;
//    float square() override {
//        float s = (float)(a + b + c) / 2;
//        return sqrt(s * (s - a) * (s - b) * (s - c));
//    }
//};

int main()
{
    vector<Rectangle> shapes { Rectangle(), Rectangle(), Rectangle(), Square() };

}