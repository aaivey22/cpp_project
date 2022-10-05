#include "roster.h"
#include "student.h"
#include <string>
#include<vector>
using namespace std;

// declaration for function to return enum value
DegreeProgram conversion(const string& str); 

// constructor
Roster::Roster() {};

// destructor
Roster::~Roster() {};

// adds a new student object to the class roster array
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram){
	classRosterArray[arrayIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
	++arrayIndex;
};

// parses student data and calls the add function
void Roster::parse(const string studentData) {
	vector<string> listOfWords;
		string parsedWord;
		string parsed = "";
		for (int i = 0; i < studentData.size(); i++) {
			if (studentData[i] != ',') { // checks if current character is not a delimeter of ','
				parsed += studentData[i];
				if (i == (studentData.size() - 1)) // checking the byte size of string studentData
				{
					parsedWord = parsed;
					listOfWords.push_back(parsedWord); // adds it to the vector if it's at the end of the string
					parsed = "";
				}
			}
			else { // if the current char is a comma, add the parsed word to the vector
				parsedWord = parsed;
				listOfWords.push_back(parsedWord);
				parsed = "";
			}
		}

		for (int i = 0; i < 1; i++)
		{
			// get DegreeProgram enum from string in listOfWords
			DegreeProgram degreeprogram = conversion(listOfWords[(i * 9) + 8]);
			// add function
			add(
				listOfWords[i * 9],
				listOfWords[(i * 9) + 1],
				listOfWords[(i * 9) + 2],
				listOfWords[(i * 9) + 3],
				std::stoi(listOfWords[(i * 9) + 4]),
				std::stoi(listOfWords[(i * 9) + 5]),
				std::stoi(listOfWords[(i * 9) + 6]),
				std::stoi(listOfWords[(i * 9) + 7]),
				degreeprogram);
		}
};

// removes student from array based on student ID
void Roster::remove(string studentID){
	bool foundID = false;
	int arraySize = sizeof(classRosterArray) / sizeof(classRosterArray[0]);
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); i++) {
		if (classRosterArray[i] != nullptr) {
			if (studentID == classRosterArray[i]->GetID()) {
				classRosterArray[i] = nullptr;
				foundID = true;
			};
		};
	};
	if (foundID) {
		std::cout << "Removing " << studentID <<":" << std::endl;
	}
	else {
		std::cout << "The student with the ID: " << studentID << " was not found." << std::endl;
	}
};

// prints out the content of the student objects in the classRosterArray
void Roster::printAll(){
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); i++) {
		if (classRosterArray[i] != nullptr) { // excludes indicies that are null pointers
			classRosterArray[i]->print();
		}
	}
};

// prints the average days in course based on the student ID
void Roster::printAverageDaysInCourse(string studentID){
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); i++) {
		if (studentID == classRosterArray[i]->GetID()) {
			int Day1;
			int Day2;
			int Day3;
			classRosterArray[i]->GetDays(Day1, Day2, Day3);
			std::cout << "Student ID: "<< classRosterArray[i]->GetID() << ", average days in course is: " << (Day1 + Day2 + Day3) / 3 << std::endl;

		}
	}
};

// prints a list of invalid emails that contain errors
void Roster::printInvalidEmails() { 
	std::cout << "\nDisplaying invalid emails:\n\n";

	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); i++) {
		bool invalid1 = true;
		bool invalid2 = true;

		for (char letter : classRosterArray[i]->GetstudentEmail()) {
			if (letter == ' ') {
				classRosterArray[i]->printEmail();
				std::cout << " - is invalid." << std::endl;
			} if (letter == '@') {
				invalid1 = false;
			}if (letter == '.') {
				invalid2 = false;
			}
		}
		if (invalid1 || invalid2) {
			classRosterArray[i]->printEmail();
			std::cout << " - is invalid." << std::endl;
		}

	}
};

// prints a list of students with the provided degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
	string program;
	if (degreeProgram == SOFTWARE) {
		program = "SOFTWARE";
	};

	if (degreeProgram == SECURITY) {
		program = "SECURITY";
	};

	if (degreeProgram == NETWORK) {
		program = "NETWORK";
	};

	std::cout << "\nShowing students in the degree program: " << program <<endl << endl;

	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); i++) {
		DegreeProgram studentProgram;
		studentProgram = classRosterArray[i]->GetstudentProgram();
		if (studentProgram == degreeProgram) {
			classRosterArray[i]->print();
		}
	}
};

// function to return enum value
DegreeProgram conversion(const string& str) { 
	if (str == "SECURITY") return SECURITY;
	if (str == "NETWORK") return NETWORK;
	if (str == "SOFTWARE") return SOFTWARE;
};
