#include "Array.h"


Array::Array() : size{ 0 }, arr{ nullptr } {
	cout << "Default constructor called" << endl;
};

Array::Array(int n) : size{ n }, arr{ new int [n] {} } {
	cout << "Overloaded constructor called" << endl;
}

Array::Array(const Array& obj):Array(obj.size) {
	cout << "Copy constructor called" << endl;
	for (int i = 0; i < obj.size; i++)
		arr[i] = obj.arr[i];
}

void Array::init() {
	for (int i = 0; i < size; i++)
		arr[i] = rand() % size;
}

void Array::print() {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}


void Array::resize(int n) {
	// 1 2 3 4 5 6 7 8 9 10 - size 10
	// size 5
	int s = n < size ? n : size;
	int* arr1 = new int[n] {};
	for (int i = 0; i < s; i++)
		arr1[i] = arr[i];
	delete[]arr;
	arr = arr1;
	size = n;
}

void Array::sort() {
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < size - i; j++) {
			if(arr[j - 1]> arr[j])
				std::swap(arr[j - 1], arr[j]);
		}
	}
}

int Array::getMax() {
	if (size == 0)
		return -1;
	int max_index{0}; // индекс элемента с макисмальным значением
	for (int i = 1; i < size; i++) {
		if (arr[max_index] < arr[i])
			max_index = i;
	}
	return max_index;
}

int Array::getMin() {
	if (size == 0)
		return -1;
	int min_index{ 0 }; // индекс элемента с макисмальным значением
	for (int i = 1; i < size; i++) {
		if (arr[min_index] > arr[i])
			min_index = i;
	}
	return min_index;
}



Array::~Array() {
	cout << "Destructor called" << endl;
	delete[]arr;
}