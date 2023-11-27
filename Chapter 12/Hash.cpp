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
	int inc = 0;
	Student student;
	Student placeHolder;


	s.resize(40);
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

		
		s[hash(key)] = student;
		
	
	}
}

int Hash::hash(int key)
{
	return key % 40;
}

void Hash::display()
{
	Student compare;

	for (int i = 0; i < 40; i++)
	{
		if (compare != s[i])
		{
			cout << "[" << i << "] - " << s[i] << endl;
		}
	}
}