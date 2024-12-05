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

