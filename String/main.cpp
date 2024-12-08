#include <iostream>
#include <vector>
#include "String.h"
#include "Book.h"
#include "Array.h"
#include "Var.h"
#include <cassert>

using namespace std;
void findBookByAuthor(Book* b, const char* a) {
	if (b[0].author.mystrcmp(a) == 0)
		cout << "Autors are equal" << endl;
}

//https://github.com/VeselovAcademy/OOP.git

int countDigits(int n) {
	int count{};
	while (n != 0) {
		count++;
		n /= 10;
	}
	return count;
}

char* to_string(int n) {
	int length = countDigits(n);
	char* ptr = new char[length + 1];
	int digit{};
	ptr[length] = '\0';
	for (int i = 0; i < length; i++) {
		digit = n % 10;
		n /= 10;
		ptr[length - 1 - i] = digit + 48;
	}
	return ptr;
}

Var operator+(const Var& vleft, const Var& vright) {
	Var result{};
	//vleft - string, vright - int
	//vleft - int, vright - string
	if (vleft.type == Var::Type::STRING && vright.type == Var::Type::INT) {
		result.type = Var::Type::STRING;
		//int vrightlength = countDigits(*(int*)vright.ptr);
		//cout << "Count digits: " << vrightlength << endl;
		//int vleftlength = (*(String*)vleft.ptr).length();
		result.ptr = new String{*(String*)vleft.ptr};
		//strcpy_s((char*)result.ptr, vleftlength + 1, (char*)vleft.ptr);
		//char* word = to_string(*(int*)vright.ptr);
		//strcat_s((char*)result.ptr, vrightlength, word);
		//delete[]word;
	}
	return result;
}


int main() {

	int n{10};
	double d{3.2};
	char c{'s'};

	int* n_ptr = &n;
	//n_ptr = &d;

	void* v_ptr = &n;
	cout << *(int*)v_ptr << endl;
	cout << *(float*)v_ptr << endl;
	cout << *(char*)v_ptr << endl;
	cout << "------------" << endl;
	v_ptr = &d;
	cout << *(int*)v_ptr << endl;
	cout << *(double*)v_ptr << endl;
	cout << *(char*)v_ptr << endl;

	Var v1{10};
	Var v2{3.2};
	Var v3{ "1234" };

	v1.Show();
	v2.Show();
	v3.Show();

	cout << "Test to string: " << endl;
	//cout << to_string(1234) << endl;
	(v3 + v1);
	/*
	Array a1{10};
	a1 = Array{ 5 };

	cout <<  "a1[2]: " << a1[2] << endl;
	cout << "a1[2]: " << a1[2] << endl;

	
	a1.print();
	a1(5);
	a1.print();
	cout << (int)a1 << endl;
	cout << (char*)a1 << endl;
	*/
	//const int size = 3;
	//Book library[size]{
	//	{"Tolstoy", "Peace and War", "Star", 1850, 1200},
	//	{"Pushkin", "Onegin", "Space", 1760, 400},
	//	{"Lermontov", "Stihi", "Moskva", 1740, 350}
	//};

	////findBookByAuthor(library, "Tolstoy");
	//String s1{"Hello"};
	//s1.print();

	//String s2;
	//s2 = s1;

	//s2.print();
	//int i = 2;
	////assert( i && "Index is out ");
}

//Следующий урок:
// inline
// explicit
// интрефейс
//Следующий урок начать с дорешивания примера Array
//Разбор ДЗ многоквартирный дом, массив квартир в классе Дом статический

//Не успели прорешать ПЗ: не отработали использование explicit конструктора.
//У некоторых студентов не собирлась программа, подходил искал множество ошибок, потратил время
//Нужно найти способ для отставших, чтобы они получили рабочий код. Нужен Гит для скорости,чтобы отставшие студенты быстро могли подгрузить мой код.
//На следующем уроке: завершить разработку задачи класса Book, выполнить сравнение нужных строк.
//Перейти к перегрузке операторов, начав с оператора сравнения
//Привести пример использования explicit конструктора на решенной задаче Book