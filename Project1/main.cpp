#include <iostream>

using namespace std;

class Fraction {
	int num; //числитель
	int den; // знаменатель
	//Вспомогательная функция поиска наибольшего общего делителя
	int GCD(int a, int b) {
		int temp;
		while (b > 0) {
			temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}

public:
	int getNum() const {
		return num;
	}
	int getDen() const {
		return den;
	}

	void setNum(int x) {
		num = x;
	}

	void setDen(int y) {
		den = y;
	}



	//вывод дроби на экран
	void print() const {
		cout << num << "/" << den << endl;
	}

	void multiply(int x) {
		num *= x;
	}

	Fraction multiply(Fraction f) {
		Fraction result;
		result.num = this->num * f.getNum();
		result.den = this->den * f.getDen();

		int gcd = GCD(result.num, result.den);
		result.num /= gcd;
		result.den /= gcd;

		return result;
	}


};


int main() {
	
	Fraction fraction;
	Fraction fraction1;
	//cout << fraction.getNum() << endl;
	//fraction.print();
	fraction.setNum(10);
	fraction.setDen(15);

	fraction1.setNum(7);
	fraction1.setDen(8);


	fraction.print();
	cout << fraction.getNum() << endl;
	cout << "Result multiply: " << endl;
	fraction.multiply(fraction1).print();
	

}


