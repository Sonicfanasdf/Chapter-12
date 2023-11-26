#pragma once
#include<iostream>
#include"Student.h"
#include"string"
#include<vector>
#include<fstream>
using namespace std;

char inputChar(string prompt, string options);

class Hash
{
private:
	vector<Student> students[40];
public:
	void hashMenu();
	void initializeVector();
	int hash(int key);
};