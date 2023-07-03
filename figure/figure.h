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
    // У прямоугольника всегда 4 угла, все они по 90 градусов
    int width;
    int height;
public:
    Rectangle(int width, int height) {}
    inline double Square() { return width * height; }
    inline double Perimeter() { return (2 * width) + (2 * height);}
};

class Circle : public Figure
{
    // У окружности 0 углов, есть константа - число пи
    double radius;
    const double pi = 3.14;
public:
    Circle(double radius) {}
    inline double Square() {return radius * radius * pi; }
    inline double Perimeter() {return 2 * radius * pi;}
};

class Triangle : public Figure
{
    int a;
    int b;
    int c;
public:
    Triangle(int a, int b, int c) {}
    inline double Square(){ double p = (a + b + c) / 2; return sqrt(p*(p - a)*(p - b)*(p - c)); };
    inline double Perimeter() { return a+b+c; }
};
/*
class Printer
{
public:
    void out();
};
*/
#endif // FIGURE_H
