#include "roster.h"
#include "student.h"
#include <string>
#include<vector>
using namespace std;

DegreeProgram conversion(const string& str);

Roster::Roster() {};
Roster::~Roster() {};

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram){
	classRosterArray[arrayIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
	++arrayIndex;
};

void Roster::parse(const string studentData) {
	vector<string> listOfWords;
		string parsedWord;
		string parsed = "";
		for (int i = 0; i < studentData.size(); i++) {
			if (studentData[i] != ',') {
				parsed += studentData[i];
				if (i == (studentData.size() - 1))
				{
					parsedWord = parsed;
					listOfWords.push_back(parsedWord);
					parsed = "";
				}
			}
			else {
				parsedWord = parsed;
				listOfWords.push_back(parsedWord);
				parsed = "";
			}
		};

		for (int i = 0; i < 1; i++)
		{
			DegreeProgram degreeprogram = conversion(listOfWords[(i * 9) + 8]);
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

void Roster::remove(string studentID){};
void Roster::printAll(){
	std::cout << "Displaying all students:\n" << std::endl;
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); i++) {
		classRosterArray[i]->printID();
		std::cout << "\t";

		classRosterArray[i]->printFName();
		std::cout << "\t";

		classRosterArray[i]->printLName();
		std::cout << "\t";

		classRosterArray[i]->printAge();
		std::cout << "\t";

		classRosterArray[i]->printDays();
		std::cout << "\t";

		classRosterArray[i]->printProgram();

		std::cout << std::endl;

	};
};

void Roster::printAverageDaysInCourse(string studentID){};

void Roster::printInvalidEmails(){
	std::cout << "\nDisplaying invalid emails:\n\n";

	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); i++) {
		bool invalid1 = true;
		bool invalid2 = true;

		for (char letter : classRosterArray[i]->GetstudentEmail()) {
			if (letter == ' ') {
				classRosterArray[i]->printEmail();
				std::cout << std::endl;
			} if (letter == '@') {
				invalid1 = false;
			}if (letter == '.') {
				invalid2 = false;
			}
		}
		if (invalid1 || invalid2) {
			classRosterArray[i]->printEmail();
			std::cout << std::endl;
		}

	}
};

DegreeProgram conversion(const string& str) {
	if (str == "SECURITY") return SECURITY;
	if (str == "NETWORK") return NETWORK;
	if (str == "SOFTWARE") return SOFTWARE;
};
