#include <iostream>
#include <vector>
#include "String.h"
#include "Book.h"
#include <cassert>

using namespace std;
void findBookByAuthor(Book* b, const char* a) {
	if (b[0].author.mystrcmp(a) == 0)
		cout << "Autors are equal" << endl;
}



int main() {
	const int size = 3;
	Book library[size]{
		{"Tolstoy", "Peace and War", "Star", 1850, 1200},
		{"Pushkin", "Onegin", "Space", 1760, 400},
		{"Lermontov", "Stihi", "Moskva", 1740, 350}
	};

	//findBookByAuthor(library, "Tolstoy");
	String s1{"Hello"};
	s1.print();

	String s2;
	s2 = s1;

	s2.print();
	int i = 2;
	//assert( i && "Index is out ");
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