#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <iostream>  
#include <iomanip>
#include <stdio.h>
#include <cstring>

/* Задание №1
Реализуйте класс “Студент”.Необходимо хранить в перемен ных - членах класса : ФИО, дату рождения, контактный телефон,
город, страну, название учебного заведения, город и страну(где находится учебное заведение), номер группы.
Реализуйте функции - члены класса для ввода данных, вывода данных, реализуйте
 аксессоры для доступа к отдельным переменным - членам. */

using namespace std;

const int maxNameLength = 50;
const int maxLocationLength = 30;

class Student {
private:
	char name[maxNameLength];       // ФИО
	char birthDate[11];             // Дата рождения
	char phone[15];                 // Контактный телефон
	char city[maxLocationLength];   // Город проживания
	char country[maxLocationLength];// Страна проживания
	char university[maxLocationLength]; // Название учебного заведения
	char universityCity[maxLocationLength]; // Город учебного заведения
	char universityCountry[maxLocationLength]; // Страна учебного заведения
	int groupNumber;                // Номер группы

public:
	// Инициализация студента
	//void initStudent(const char* name_p, const char* birthDate_p, const char* phone_p,
	//	const char* city_p, const char* country_p, const char* university_p,
	//	const char* universityCity_p, const char* universityCountry_p, int group_p) {
	//	strncpy(name, name_p, maxNameLength);
	//	strncpy(birthDate, birthDate_p, 11);
	//	strncpy(phone, phone_p, 15);
	//	strncpy(city, city_p, maxLocationLength);
	//	strncpy(country, country_p, maxLocationLength);
	//	strncpy(university, university_p, maxLocationLength);
	//	strncpy(universityCity, universityCity_p, maxLocationLength);
	//	strncpy(universityCountry, universityCountry_p, maxLocationLength);
	//	groupNumber = group_p;
	//}

	void myInitStudent(const char* name_p, const char* birthDate_p, const char* phone_p,
		const char* city_p/*, const char* country_p, const char* university_p,
		const char* universityCity_p, const char* universityCountry_p, int group_p*/) {
		strncpy_s(name, name_p, maxNameLength);
		strncpy_s(birthDate, birthDate_p, 11);
		strcpy_s(phone, 15, phone_p);
		/*if (strcpy_s(phone, 15, phone_p)== 0) {
			cout << "Error phone number" << endl;
		}
		if (strncpy(city, city_p, maxLocationLength) == 0) {
			cout << "Error City" << endl;
		}*/
		strncpy_s(city, city_p, maxLocationLength);
		//strncpy(country, country_p, maxLocationLength);
		//strncpy(university, university_p, maxLocationLength);
		//strncpy(universityCity, universityCity_p, maxLocationLength);
		//strncpy(universityCountry, universityCountry_p, maxLocationLength);
		//groupNumber = group_p;
	}




	void printStudent() const {
		cout << "ФИО: " << name << endl;
		cout << "Дата рождения: " << birthDate << endl;
		cout << "Телефон: " << phone << endl;
		cout << "Город проживания: " << city << endl;
		//cout << "Страна проживания: " << country << endl;
		//cout << "Учебное заведение: " << university << endl;
		//cout << "Город учебного заведения: " << universityCity << endl;
		//cout << "Страна учебного заведения: " << universityCountry << endl;
		//cout << "Номер группы: " << groupNumber << endl;
	}

	// Геттеры и сеттеры для доступа к переменным-членам
	const char* getName() const {
		return name;
	}
	void setName(const char* newName) {
		strncpy_s(name, newName, maxNameLength);
	}

	const char* getBirthDate() const {
		return birthDate;
	}
	void setBirthDate(const char* newBirthDate) {
		strncpy_s(birthDate, newBirthDate, 11);
	}

	const char* getPhone() const {
		return phone;
	}
	void setPhone(const char* newPhone) {
		strncpy_s(phone, newPhone, maxNameLength);

	}

	const char* getCity() const {
		return city;
	}
	void setCity(const char* newCity) {
		strncpy_s(city, newCity, maxLocationLength);
	}

	const char* getCountry() const {
		return country;
	}
	void setCountry(const char* newCountry) {
		strncpy_s(country, newCountry, maxLocationLength);
	}

	const char* getUniversity() const {
		return university;
	}
	void setUniversity(const char* newUniversity) {
		strncpy_s(university, newUniversity, maxLocationLength);
	}

	const char* getUniversityCity() const {
		return universityCity;
	}
	void setUniversityCity(const char* newUniversityCity) {
		strncpy_s(universityCity, newUniversityCity, maxLocationLength);
	}

	const char* getUniversityCountry() const {
		return universityCountry;
	}
	void setUniversityCountry(const char* newUniversityCountry) {
		strncpy_s(universityCountry, newUniversityCountry, maxLocationLength);
	}

	int getGroupNumber() const {
		return groupNumber;
	}
	void setGroupNumber(int newGroupNumber) {
		groupNumber = newGroupNumber;
	}
};

int main() {
	setlocale(0, "");

	Student student;

	student.myInitStudent("Иванов И.И.", "15.05.2000", "+7-900-123-45-678", "Кемерово");

	student.printStudent();
	cout << "GET: " << student.getPhone();

	cout << "\nИзменение имени студента...\n";
	student.setName("Петров П.П.");
	cout << "Новое имя: " << student.getName() << endl;

	return 0;
}

//Строка поля Phone не закрыта нультерминатором, поэтому вывод происходит вплоть до первого попавшегося символа '\0' в строке
//Правильное поведение программы: закрыте с ошибкой "Buffer Oversize", Которую вызывает функция strcpy_s, включая ошибкой параметр error_t