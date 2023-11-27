#pragma once
#include<iostream>
#include"Student.h"
#include"string"
#include<vector>
#include<fstream>
using namespace std;

char inputChar(string prompt, string options);
int inputInteger(string prompt, int startRange, int endRange);

class Hash
{
private:
	vector<Student> s;
	int size;
public:
	void hashMenu();
	void initializeVector();
	int hash(int key);
	void hashDisplay();
};