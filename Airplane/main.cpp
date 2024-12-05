#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Circle {
	unsigned rad;
public:
	Circle(unsigned r) : rad{ r } {};
	Circle() : Circle(0) {};

	unsigned getRad() const {
		return rad;
	}

	void setRad(unsigned p) {
		rad = p;
	}

	bool operator==(const Circle& r_circle) {
		return rad == r_circle.rad;
	}

	bool operator>(const Circle& r_circle) {
		return rad > r_circle.rad;
	}

	unsigned operator+=(int n) {
		return rad += n;
	}
	
	//friend bool operator==(const Circle& l_circle, const Circle& r_circle);
};
//bool operator==(const Circle& l_circle, const Circle& r_circle) {
////	return l_circle.getRad() == r_circle.getRad();
// return l_circle.rad == r_circle.rad;
//}


/*
—оздать класс Airplane (самолет)
— помощью перегрузки операторов реализовать:
- ѕроверка на равенство типов самолетов (операци€ ==)
- ”величение и уменьшение пассажиров в салоне самолета
(операции ++ и -- в префиксной форме)
-  —равнение двух самолетов по максимально возможному
количеству пассажиров на борту (операци€>)
*/

class Airplane {
	unsigned maxPass;
	unsigned passCount;
public:
	Airplane(unsigned mP, unsigned passP) : maxPass{ mP }, passCount{passP} {};
	Airplane() : Airplane(12,0) {};

	bool operator==(const Airplane& obj) {
		return maxPass == obj.maxPass;
	}
	bool operator>(const Airplane& obj) {
		return maxPass > obj.maxPass;
	}

	void print() {
		cout << "Max Passengers:\t\t" << maxPass << endl;
		cout << "Passengers Count:\t" << passCount << endl;
	}

	Airplane operator++() {
		passCount += 1;
		return *this;
	}

	Airplane operator++(int) {
		Airplane result{*this};
		passCount += 1;
		return result;
	}
	friend std::ostream& operator<<(std::ostream& os, const Airplane& obj);
};

//                                    cout
std::ostream& operator<<(std::ostream& os, const Airplane& obj) {
	os << "Max Passengers:\t\t" << obj.maxPass << endl;
	os << "Passengers Count:\t" << obj.passCount << endl;
	return os;
}





void main() {

	int n{10};
	//int& n_ref = n;
	//cout << "N: " << ++n << endl; //11
	//cout << "N: " << n << 3 << endl; //11

	Airplane a1{100,12};
	Airplane a2{};
	
	a2 = a1;

	cout << a2 << endl;
}