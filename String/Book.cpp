#include "Book.h"


Book::Book():Book("No author", "No name", "No publisher", 0, 0) {

}

Book::Book(const char* auth, const char* nm, const char* pb, int yr, int pg):
	author{ auth }, name{ nm }, publisher{ pb }, year{ yr }, pages{pg} {

}

void Book::print() {
	std::cout << "Author: ";
	author.print();
	std::cout << "Name: ";
	name.print();
	std::cout << "Publisher: ";
	publisher.print();
	std::cout << "Year: " << year << std::endl;
	std::cout << "Pages: " << pages << std::endl;
}