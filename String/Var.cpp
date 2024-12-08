#include "Var.h"

Var::Var(int v) {
	ptr = new int{v};
	type = INT;
}

Var::Var(double d) {
	ptr = new double{d};
	type = DOUBLE;
}


Var::Var(const String& str) {
	ptr = new String{str};
	type = STRING;
}

Var::Var(const Var& v) {
	type = v.type;
	if (type == INT) {
		*(int*)ptr = *(int*)(v.ptr);
	}
	else if (type == DOUBLE) {
		*(double*)ptr = *(double*)(v.ptr);
	}
	else if (type == STRING) {
		*(String*)ptr = *(String*)(v.ptr);
	}
	else
		cout << "Error with TYPE" << endl;
}

//Var& Var::operator=(const Var& v) {
//	type = v.type;
//	if (type == INT) {
//		*(int*)ptr = *(int*)(v.ptr);
//	}
//	else if (type == DOUBLE) {
//		*(double*)ptr = *(double*)(v.ptr);
//	}
//	else if (type == STRING) {
//		
//		*(String*)ptr = *(String*)(v.ptr);
//	}
//	else
//		cout << "Error with TYPE" << endl;
//
//	return *this;
//}


void Var::Show() const {
	if (type == INT) {
		cout << *(int*)ptr << endl;
	}
	else if (type == DOUBLE) {
		cout << *(double*)ptr << endl;
	}
	else if (type == STRING) {
		(*(String*)ptr).print();
	}
}





Var::~Var() {
	delete ptr;
}