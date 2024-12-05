#pragma once
#include "String.h"

/*
�������� ����� Book
���������� ������� ������ :
	�����,
	��������,
	������������,
	���,
	�����������������.

������� ������ ��������.
������� :
- ������ ���� ��������� ������;
- ������ ����, ���������� �������� �������������;
- ������ ����, ���������� ����� ��������� ����.
����������� explicit ����������� � ����������� ������� - �����(��������, ��� ����������� ������ � ����� � �.�.
*/
class Book
{
public:
	String author;
	String name;
	String publisher;
	int year;
	int pages;

public:
	Book();
	Book(const char* auth, const char* nm, const char* pb, int yr, int pg);
	void print();

};

