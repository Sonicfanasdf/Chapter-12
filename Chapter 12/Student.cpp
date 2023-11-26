#include"Student.h"

Student::Student()
{
	studentID = 0;
	name = "";
	major = "";
	gpa = 0;
}
void Student::setStudentID(int newID)
{
	studentID = newID;
}
int Student::getStudentID() const
{
	return studentID;
}
void Student::setName(string newName)
{
	name = newName;
}
string Student::getName() const
{
	return name;
}
void Student::setMajor(string newMajor)
{
	major = newMajor;
}
string Student::getMajor() const
{
	return major;
}
void Student::setGPA(double newGPA)
{
	gpa = newGPA;
}
double Student::getGPA() const
{
	return gpa;
}

ostream& operator <<(ostream& outs, const Student& obj)
{
	outs << obj.studentID << ", " << obj.name << ", " << obj.major << ", " << obj.gpa;
	return outs;
}