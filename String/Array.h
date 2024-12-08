#pragma once
#include <iostream>
using std::cout;
using std::endl;

/*
�������� ����� Array (��� ����������� ����� ��������� ����).
����� Array � ��� ����� ������������� �������.
������ ������� ����� ���� ������� � �������� ��������� ��� ����� � ������� ������ �������-�����.

 ����� ������
-  ��������� ��������� ������ ����������,
- ���������� ���������� �������,
- �������� ������ �������,
- ����������� ������,
- ���������� ����������� � ������������ ��������.

����� ������ ��������� ����� ������������� (����������� ����������� ����������), ����������.
*/


/*
�������������� � int ���������� ����� ��������� �������
�������������� � char* ���������� �������� ��������� ������� � ���� ������
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

	//�������������� � int ���������� ����� ��������� �������
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

