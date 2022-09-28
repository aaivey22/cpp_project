#pragma once
#include <iostream>
#include "degree.h"

using namespace std;

class Student { // student class containing functions to manipulate variables
public:
	//Student() = default;
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram); //constructor
	~Student(); //destructor

	void SetID(std::string studentID); // sets student ID
	std::string GetID(); // gets student ID
	void printID();

	void SetFirstName(std::string firstName); // sets student first name
	std::string GetFirstName(); // gets first name
	void printFName();

	void SetLastName(std::string lastName); // sets student last name
	std::string GetLastName(); // gets last name
	void printLName();

	void SetstudentEmail(std::string emailAddress); // sets student email
	std::string GetstudentEmail(); // gets email
	void printEmail();

	void SetstudentProgram(DegreeProgram program); // sets student program
	DegreeProgram GetstudentProgram(); // gets program
	void printProgram();

	void SetstudentAge(int age); // sets student age
	int GetstudentAge(); // gets student age
	void printAge();

	void SetDays(int daysInCourse1, int daysInCourse2, int daysInCourse3); // sets student days in course using an array
	void GetDays(int& daysInCourse1, int& daysInCourse2, int& daysInCourse3); // & is a pointer that allows you to  retrieve AND modify the stored value
	void printDays();



private:
	std::string studentID; // variable
	std::string firstName; // variable
	std::string lastName; // variable
	std::string studentEmail; // variable
	DegreeProgram studentProgram; // variable

	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;

	int studentAge; // variable
	//int numDays[3]; // variable with an array


};