#include <iostream>
#include "student.h"
#include "degree.h"
#include "roster.h"

using namespace std;

int main() {
	std::cout << "C867-Scripting & Programming: Applications\nLanguage: C++\nStudent ID: 001044088\nName: Angela Ivey\n" << std::endl;

	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Angela,Ivey,aivey9@wgu.edu,34,15,20,7,SOFTWARE" 
	};

	Roster classRoster;
	for (int i = 0; i < sizeof(studentData) / sizeof(studentData[0]); i++) {
		classRoster.parse(studentData[i]);
	};

	classRoster.printAll();
	classRoster.printInvalidEmails();

	for (int i = 0; i < sizeof(classRoster.classRosterArray) / sizeof(classRoster.classRosterArray[0]); i++) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->GetID());
	};

	return 0;
}
