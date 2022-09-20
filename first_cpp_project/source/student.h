#pragma once
#include <iostream>

class Student { // student class containing functions to manipulate variables
public:
	Student(std::string ID, std::string fName, std::string lName, std::string email, std::string program, int age, int numdays[3]); //constructor
	~Student(); //destructor

	void SetID(std::string ID); // sets student ID
	std::string GetID(); // gets student ID

	void SetFirstName(std::string fName); // sets student first name
	std::string GetFirstName(); // gets first name

	void SetLastName(std::string lName); // sets student last name
	std::string GetLastName(); // gets last name

	void SetstudentEmail(std::string email); // sets student email
	std::string GetstudentEmail(); // gets email

	void SetstudentProgram(std::string program); // sets student program
	std::string GetstudentProgram(); // gets program

	void SetstudentAge(int age); // sets student age
	int GetstudentAge(); // gets student age

	void SetDays(int days1, int days2, int days3); // sets student days in course using an array
	int GetDays(int& day1, int& day2, int& day3); // & is a pointer that allows you to  retrieve AND modify the stored value



private:
	std::string studentID; // variable
	std::string firstName; // variable
	std::string lastName; // variable
	std::string studentEmail; // variable
	std::string studentProgram; // variable

	int studentAge; // variable
	int numDays[3]; // variable with an array


};