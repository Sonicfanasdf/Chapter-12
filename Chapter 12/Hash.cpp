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
		case 'A': size = inputInteger("\n\t\t\tEnter a number of read-in records: ", 1, 40);
			cout << "\n\t\t\t" << size << " records have been inserted.\n";
			 initializeVector();
			break;
		case 'B': hashSearch();
			break;
		case 'C':
			break;
		case 'D': hashDelete();
			break;
		case 'E': hashDisplay();
			
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
	int inc = 1;
	int index;
	Student student;
	Student placeHolder;


	s.resize(40);
	read.open("Students.dat");

	
	for (int i = 0; i < size; i++)
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

		index = hash(key);

		while (s[index] != placeHolder)
		{
			index = (index + 1) % s.size(); // Linear probing to find an empty slot
		}

		s[index] = student;

		/*for (int i = 0; i < size; i++)
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

			if (s[hash(key)] != placeHolder)
			{
				for (int k = hash(key); k < s.size() && s[k] != placeHolder; k++)
				{
					index = k;
				}
				if ((index + 1) >= s.size())
				{
					index = 0;
					for (int j = 0; j < hash(key) && s[j] != placeHolder; j++)
					{
						index = j;
					}
					s[index] = student;
				}
				else
				{
					s[index + 1] = student;
				}

			}
			else
			{
				s[hash(key)] = student;
			}

		}*/

	}
}

int Hash::hash(int key)
{
	return key % s.size();
}

void Hash::hashDisplay()
{
	Student compare;

	cout << endl;

	for (int i = 0; i < s.size(); i++)
	{
		if (compare != s[i])
		{
			cout << "[" << i << "] - " << s[i] << endl;
		}
	}
}
void Hash::hashSearch()
{
	int tempKey;

	tempKey = inputInteger("\n\t\t\tEnter a student ID to search: ", true);

	for (int m = hash(tempKey); m < s.size(); m++)
	{
		if (s[m].getStudentID() == tempKey)
		{
			cout << "\n\t\t\tStudent record found at index #" << m << "\n";
			cout << "\t\t\t\tStudentID    : " << s[m].getStudentID() << endl;
			cout << "\t\t\t\tName         : " << s[m].getName() << endl;
			cout << "\t\t\t\tMajor        : " << s[m].getMajor() << endl;
			cout << "\t\t\t\tGPA          : " << s[m].getGPA() << endl << endl;

			break;
		}
	}
}
void Hash::hashDelete()
{
	int keyHolder;


	keyHolder = inputInteger("\n\t\t\tEnter a student ID to remove: ", true);

	for (int k = hash(keyHolder); k < s.size(); k++)
	{
		if (s[k].getStudentID() == keyHolder)
		{
			cout << "\n\t\t\t Student record index #" << k << " with ID: " << keyHolder << " has been removed.\n\n";

			auto it = s.begin() + k;
			s.erase(it);
			break;
		}
	}
}