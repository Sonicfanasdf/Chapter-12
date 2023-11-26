#include"Hash.h"

void Hash::hashMenu()
{
	do
	{
		cout << "\n\t\t3> Application using hashing\n";
		cout << "\t\t" << string(100, char(205)) << endl;
		cout << "\t\t\tA> Read data file, hash and insert into the dynamic array\n";
		cout << "\t\t\tB> Search an element from the dynamic array\n";
		cout << "\t\t\tC> Insert an element into the dynamic array\n";
		cout << "\t\t\tD> Remove an element from the dynamic array\n";
		cout << "\t\t\tE> Display all records from the array\n";
		cout << "\t\t" << string(100, char(196)) << endl;
		cout << "\t\t\t0> return\n";
		cout << "\t\t" << string(100, char(205)) << endl;

		switch (inputChar("\t\t\tOption: ", "ABCDE0"))
		{
		case 'A':
			break;
		case 'B':
			break;
		case 'C':
			break;
		case 'D':
			break;
		case 'E':
			break;
		case '0': system("cls"); return;
			break;
		}
	} while (true);
}
void Hash::initializeVector()
{
	ifstream read;

	string iD;
	string studentName;
	string studentMajor;
	string studentGPA;
	int key;

	Student student;

	read.open("Students.dat");

	while (!read.eof())
	{
		getline(read, iD, ',');
		student.setStudentID(stoi(iD));
		key = stoi(iD);

		getline(read, studentName, ',');
		student.setName(studentName);

		getline(read, studentMajor, ',');
		student.setMajor(studentMajor);

		getline(read, studentGPA);
		student.setGPA(stod(studentGPA));

		students[hash(key)] = student;
	}
}

int Hash::hash(int key)
{
	return key % students->size();
}