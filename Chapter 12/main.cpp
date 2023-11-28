#include<iostream>
#include<string>
#include"input.h"
#include"Student.h"
#include<list>
#include"Hash.h"
using namespace std;

void mainMenu();

int main()
{

	mainMenu();

	return 0;
}

//Precondition: NA
//Postcondition: displays main menu
void mainMenu()
{
	
	do
	{
		Hash h;
		
		cout << "\n\tCMPR131 Chapter 12: Searches and hashing by Joe Bryant (11/27/23)\n";
		cout << "\t" << string(100, char(205)) << endl;
		cout << "\t\t1> Searching from an unsorted dynamic array\n";
		cout << "\t\t2> Searching from a sorted dynamic array\n";
		cout << "\t\t3> Application using hashing\n";
		cout << "\t" << string(100, char(196)) << endl;
		cout << "\t\t0> Exit\n";
		cout << "\t" << string(100, char(205)) << endl;

		switch (inputInteger("\t\tOption: ", 0, 3))
		{
		case 0: exit(1);
			break;
		case 1: system("cls");
			break;
		case 2: system("cls");
			break;
		case 3: system("cls"); h.hashMenu();
			break;
		}
	} while (true);

	

}