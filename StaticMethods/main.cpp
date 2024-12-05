#include <iostream>
using namespace std;
/*
������� �1
�������� ����� ��� �������� ������� �������������� �����.
����� ������ ������������� ���������������� ��� ��������
- ������� ������������ �� ������ ��������,
- ������� ��������������,
- ������� ��������,
- ������� �����.
�������-����� ��� �������� ������� ������ ���� ����������� � �������
����������� �������-������. ����� ����� ������ ������� ���������� ��������� ������� � ���������� ��� �������� � �������
����������� �������-�����.
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