#pragma once
#include "String.h"
#include <iostream>

using std::cout;
using std::endl;

//char* operator+(const Var& vleft, const Var& vright) {
//
//}




class Var
{

	friend Var operator+(const Var& vleft, const Var& vright);
	void* ptr;
	enum Type {INT, DOUBLE, STRING} type;
public:
	Var() :ptr{ nullptr }, type{INT} {}
	Var(int v);
	Var(double d);
	Var(const Var& v);
	//Var& operator=(const Var& v);
	Var(const String& str);
	void Show() const;

	~Var();

};





