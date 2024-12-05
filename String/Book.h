#pragma once
#include "String.h"

/*
Создайте класс Book
Необходимо хранить данные :
	Автор,
	Название,
	Издательство,
	Год,
	Количествостраниц.

Создать массив объектов.
Вывести :
- список книг заданного автора;
- список книг, выпущенных заданным издательством;
- список книг, выпущенных после заданного года.
Используйте explicit конструктор и константные функции - члены(например, для отображения данных о книге и т.д.
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

