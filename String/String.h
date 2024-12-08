#pragma once
#include <iostream>



class String {
	static int count;
	char* str;
public:
	//Empty string
	String();
	String(const char* s);
	int length();
	//copy constructor
	String(const String& obj);
	bool mystrcmp(const String& s2);
	void setstr(const char* s);
	void print();
	static int getCount();
	String& operator=(const String& obj);
	~String();
};


//int String::count = 0;
//Следующий урок 