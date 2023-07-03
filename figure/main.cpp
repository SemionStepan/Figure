//Создать абстрактный класс Figure с методами вычисления площади и периметра, а также методом,
//выводящим информацию о фигуре на экран. Создать производные классы: Rectangle (прямоугольник), Circle (круг),
//Triangle (треугольник) со своими методами вычисления площади и периметра.
//Создать массив n фигур и вывести полную информацию о фигурах на экран.

#include "figure.h"

using namespace std;

int main()
{
    // Инициализация фигур
    // Создаю массив из n Т, С, R
    Figure *figures[] = {new Rectangle(10, 20), new Circle(15), new Triangle(10, 10, 10)};

//    Figure f("fdfdfdf");

    // Вывод на экран
    for(auto &figure : figures)
    {
        figure->out();
        cout << endl;
    }

    return 0;
}
