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