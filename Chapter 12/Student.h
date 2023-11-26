#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student
{
private:

	int studentID;
	string name;
	string major;
	double gpa;
public:
	Student();
	void setStudentID(int newID);
	int getStudentID() const;
};