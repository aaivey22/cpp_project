#include "roster.h"
#include "student.h"
using namespace std;


Roster::Roster() {};
Roster::~Roster() {};

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram){
	classRosterArray[arrayIndex] = new Student(studentID, firstName, lastName, emailAddress, age,daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
	++arrayIndex;
	std::cout << "Added New Student " << std::endl;
};


void Roster::remove(string studentID){};
void Roster::printAll(){};

void Roster::printAverageDaysInCourse(string studentID){};
void Roster::printInvalidEmails(){};
