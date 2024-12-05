#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <iostream>  
#include <iomanip>
#include <stdio.h>
#include <cstring>

/* ������� �1
���������� ����� ��������.���������� ������� � ������� ��� - ������ ������ : ���, ���� ��������, ���������� �������,
�����, ������, �������� �������� ���������, ����� � ������(��� ��������� ������� ���������), ����� ������.
���������� ������� - ����� ������ ��� ����� ������, ������ ������, ����������
 ��������� ��� ������� � ��������� ���������� - ������. */

using namespace std;

const int maxNameLength = 50;
const int maxLocationLength = 30;

class Student {
private:
	char name[maxNameLength];       // ���
	char birthDate[11];             // ���� ��������
	char phone[15];                 // ���������� �������
	char city[maxLocationLength];   // ����� ����������
	char country[maxLocationLength];// ������ ����������
	char university[maxLocationLength]; // �������� �������� ���������
	char universityCity[maxLocationLength]; // ����� �������� ���������
	char universityCountry[maxLocationLength]; // ������ �������� ���������
	int groupNumber;                // ����� ������

public:
	// ������������� ��������
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
		cout << "���: " << name << endl;
		cout << "���� ��������: " << birthDate << endl;
		cout << "�������: " << phone << endl;
		cout << "����� ����������: " << city << endl;
		//cout << "������ ����������: " << country << endl;
		//cout << "������� ���������: " << university << endl;
		//cout << "����� �������� ���������: " << universityCity << endl;
		//cout << "������ �������� ���������: " << universityCountry << endl;
		//cout << "����� ������: " << groupNumber << endl;
	}

	// ������� � ������� ��� ������� � ����������-������
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

	student.myInitStudent("������ �.�.", "15.05.2000", "+7-900-123-45-678", "��������");

	student.printStudent();
	cout << "GET: " << student.getPhone();

	cout << "\n��������� ����� ��������...\n";
	student.setName("������ �.�.");
	cout << "����� ���: " << student.getName() << endl;

	return 0;
}

//������ ���� Phone �� ������� ����������������, ������� ����� ���������� ������ �� ������� ����������� ������� '\0' � ������
//���������� ��������� ���������: ������� � ������� "Buffer Oversize", ������� �������� ������� strcpy_s, ������� ������� �������� error_t