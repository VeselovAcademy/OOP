#include "String.h"

int String::count = 0;


String::String() :String("Empty string!") {
	//std::cout << "No args constructor called" << std::endl;
}




String::String(const char* s) {
	count++;
	int length = strlen(s);
	str = new char[length + 1]{};
	strcpy_s(str, length + 1, s);
	//std::cout << "Overloaded constructor called" << std::endl;
}



String::String(const String& obj) {
	int length = strlen(obj.str);
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
	//std::cout << "Copy constructor called" << std::endl;
}

void String::setstr(const char* s) {
	delete[]str;
	int length = strlen(s);
	str = new char[length + 1]{};
	strcpy_s(str, length + 1, s);
}


void String::print() {
	std::cout << str << std::endl;
}

int String::getCount() {
	return count;
}


bool String::mystrcmp(const String& s2) {
	return strcmp(this->str, s2.str);
}


String& String::operator=(const String& obj) {
	delete[]str;
	int length = strlen(obj.str);
	str = new char[length + 1];
	strcpy_s(str,length+1, obj.str);
	return *this;
}


String::~String() {
	count--;
	delete[]str;
	//std::cout << "Destructor called" << std::endl;
}