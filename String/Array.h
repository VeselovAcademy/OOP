#pragma once
#include <iostream>
using std::cout;
using std::endl;

/*
Создайте класс Array (или используйте ранее созданный вами).
Класс Array – это класс динамического массива.
Размер массива может быть передан в качестве параметра или задан с помощью вызова функции-члена.

 Класс должен
-  позволять заполнять массив значениями,
- отображать содержимое массива,
- изменять размер массива,
- сортировать массив,
- определять минимальное и максимальное значение.

Класс должен содержать набор конструкторов (конструктор копирования обязателен), деструктор.
*/


/*
Преобразование к int возвращает сумму элементов массива
Преобразование к char* возвращает значения элементов массива в виде строки
*/


class Array
{
	int size;
	int* arr;
public:
	Array();
	Array(int n);
	Array(const Array& obj);
	Array(Array&& obj);
	//Array& operator=(const Array& obj) = default;

	//Преобразование к int возвращает сумму элементов массива
	operator int() const {
		int sum{};
		for (int i = 0; i < size; i++)
			sum += arr[i];
		return sum;
	}


	operator char* () const {
		char* ptr = new char[size + 1] {};
		for (int i = 0; i < size; i++)
			ptr[i] = arr[i]+48;
		return ptr;
	}


	Array& operator=(Array&& obj);
	int& operator[](int i);

	void operator()(int n);


	void init();
	void print();
	void resize(int n);
	void sort();
	int getMax();
	int getMin();

	int at(int index) {
		return arr[index];
	}

	~Array();
};

