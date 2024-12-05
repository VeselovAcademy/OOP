// ��������� ������� ������ ��������

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

const int maxNameLength = 20; // ������������ ����� �����
//const int markCount = 3; // ����� ������



class Student
{
	char* name;
	//char name[maxNameLength]; // ���
	int markCount;
	int* marks; // ������ 
public:
	//�����������: ����� ��� ������ � ������ ����������
	Student() {
		cout << "Constructor for Student called" << endl;
		name = new char[7]{ "NoName" };
		//this->setName("NoName");
		markCount = 0;
		marks = nullptr;
		/*marks[0] = 0;
		marks[1] = 0;
		marks[2] = 0;*/
	}
	//����������� � �����������
	Student(const char* str, int* arr, int size) {
		cout << "Constructor for Student Parameterized called" << endl;
		int length = strlen(str);
		name = new char[length + 1]{};
		strcpy_s(name, length + 1, str);
		//this->setName(str);
		markCount = size;
		marks = new int[size];
		for (int i = 0; i < size; i++) {
			marks[i] = arr[i];
		}
	}

	~Student() {
		cout << "Destructor for Student called" << endl;
		delete[]name;
		if(marks != nullptr)
			delete[] marks;

		cout << "Memory cleaned" << endl;
		marks = nullptr;
	}





	// ���������� ������ � ��������
	void initStudent(const char* name_p, const int marks_p[]) {
		strcpy_s(name, maxNameLength, name_p);//student.name  - destination
		for (int i = 0; i < markCount; i++) {
			marks[i] = marks_p[i];
		}
	}

	double averMark() { //this
		double sum = 0;
		for (int i = 0; i < markCount; i++) {
			sum += this->marks[i];
		}
		return sum / markCount;
	}

	void printStudent() const {
		cout << name << endl;
		cout << "������: ";
		for (int i = 0; i < markCount; i++) {
			cout << setw(4) << marks[i];
		}
		cout << endl;
	}

	//accessor
	const char* getName() const {
		return name;
	}

	//modificator
	void setName(const char* newName) {
		strcpy_s(name, maxNameLength, newName);
	}


};







// ���������� ������� ������


// ����� ������ � ��������

// ------------------------------------
// ����� ������ ������� ��������� ��������� ������

int main()
{
	setlocale(LC_ALL, "");

	Student student;
	student.printStudent();

	const int size = 5;
	int a[size]{1,2,3,4,5};//

	Student stud{"qwertyuiopasdfghjkl123",a,size};
	stud.printStudent();
	
	_getch();
	return 0;
}

