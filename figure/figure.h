#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <math.h>

using namespace std;

class Figure
{
    string _name;

public:
    Figure(const string &name) : _name(name)
    {}
    virtual double Square() = 0;
    virtual double Perimeter() = 0;
    virtual void out()
    {
        cout << "Имя: " << _name << endl;
        cout << "Площадь: " << Square() << endl;
        cout << "Периметр: " << Perimeter() << endl;
    }
};

class Rectangle : public Figure
{
    // У прямоугольника всегда 4 угла, все они по 90 градусов, есть 4 стороны, которые попарно равны
    int _width;
    int _height;

public:
    Rectangle(const int width, const int height) : Figure("Rectangle"), _width(width), _height(height)
    {}
    inline double Square() { return _width * _height; }
    inline double Perimeter() { return (2 * _width) + (2 * _height); }
};

class Circle : public Figure
{
    // У окружности 0 углов, есть 1 сторона и константа - число пи
    double _radius;
    const double _pi = 3.14;

public:
    Circle(const double radius) : Figure("Circle"), _radius(radius)
    {}
    inline double Square() { return _radius * _radius * _pi; }
    inline double Perimeter() { return 2 * _radius * _pi; }
};

class Triangle : public Figure
{
    // У треугольника 3 угла, они могут быть от 1 до 179 градусов, 3 стороны
    int _a;
    int _b;
    int _c;

public:
    Triangle(const int a, const int b, const int c) : Figure("Triangle"), _a(a), _b(b), _c(c)
    {}
    inline double Square(){ double p = ( _a + _b + _c ) / 2; return sqrt(p*(p - _a)*(p - _b)*(p - _c)); };
    inline double Perimeter() { return _a + _b + _c; }
};

#endif // FIGURE_H
