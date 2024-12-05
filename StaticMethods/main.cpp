#include <iostream>
using namespace std;
/*
Задание №1
Создайте класс для подсчета площади геометрических фигур.
Класс должен предоставлять функциональность для подсчета
- площади треугольника по разным формулам,
- площади прямоугольника,
- площади квадрата,
- площади ромба.
Функции-члены для подсчета площади должны быть реализованы с помощью
статических функций-членов. Также класс должен считать количество подсчетов площади и возвращать это значение с помощью
статической функции-члена.
*/

class Square {
	static int counter;
public:
	static double triangle(int a, int h) {
		counter++;
		return a * h*0.5;
	}
	static double triangle(int a, int b, int c) {
		counter++;
		return (a+b+c)*0.5;
	}

	static int getCounter() {
		return counter;
	}
};

int Square::counter = 0;

int main() {
	cout << "Square for triangle a = 10, h = 8: " << Square::triangle(10, 8) << endl;
	cout << "Square for triangle a = 2, b = 4, c = 7: " << Square::triangle(2, 4, 7) << endl;
	cout << "Counter: " << Square::getCounter() << endl;
}