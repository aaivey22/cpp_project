#pragma once
#include<iostream>
#include "degree.h"

using namespace std;

// Roster class containing functions to manipulate class roster array
class Roster {
public:
	Roster();
	~Roster();
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
	void remove(string studentID);
	void parse(const string studentData);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
	class Student* classRosterArray[5];

private:
	int arrayIndex = 0;
};
