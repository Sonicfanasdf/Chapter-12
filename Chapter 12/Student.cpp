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

bool operator !=(const Student& obj1, const Student& obj2)
{
	if ((obj1.studentID != obj2.studentID) && (obj1.name != obj2.name) && (obj1.major != obj2.major) && (obj1.gpa != obj2.gpa))
	{
		return true;
	}
	else
	{
		return false;
	}
}