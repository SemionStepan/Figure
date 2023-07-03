#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <math.h>

class Figure
{
public:
    virtual double Square();
    virtual double Perimeter();
};

class Rectangle : public Figure
{
    // У прямоугольника всегда 4 угла, все они по 90 градусов, есть 4 стороны, которые попарно равны
    int width;
    int height;
public:
    Rectangle(int width, int height) { }
    inline double Square() { return width * height; }
    inline double Perimeter() { return (2 * width) + (2 * height); }
    inline int getWidth() { return width; }
    inline int getHeight() { return height; }
};

class Circle : public Figure
{
    // У окружности 0 углов, есть 1 сторона и константа - число пи
    double radius;
    const double pi = 3.14;
public:
    Circle(double radius) { }
    inline double Square() { return radius * radius * pi; }
    inline double Perimeter() { return 2 * radius * pi; }
    inline double getRadius() { return radius; }
};

class Triangle : public Figure
{
    // У треугольника 3 угла, они могут быть от 1 до 179 градусов, 3 стороны
    int a;
    int b;
    int c;
public:
    Triangle(int a, int b, int c) { }
    inline double Square(){ double p = ( a + b + c ) / 2; return sqrt(p*(p - a)*(p - b)*(p - c)); };
    inline double Perimeter() { return a + b + c; }
    inline int getA() { return a; }
    inline int getB() { return b; }
    inline int getC() { return c; }
};
/*
class Printer
{
public:
    void out();
};
*/
#endif // FIGURE_H
