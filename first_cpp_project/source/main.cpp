#include <iostream>
#include "student.h"
#include <string>
#include <vector>
#include "degree.h"
#include "roster.h"

using namespace std;

DegreeProgram conversion(const string& str);
//std::vector<string> parseData(const string studentData[]);

int main() {
	DegreeProgram degree;
	degree = SECURITY;
	Student Test("A1", "Reishi", "Ivey", "rivey@email.com", 2000, 0, 2, 5, degree); //constructor
	//Test.printDays();
	//std::string Pumpkin=Test.GetFirstName();
	//std::cout << Pumpkin << std::endl;

	const string studentData[] =
	{
		"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY", 
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
		"A5,Angela,Ivey,aivey9wgu.edu,34,15,20,7,SOFTWARE" 
	};
	Roster test;
	
	
	vector<string> listOfWords;
	for (int x = 0; x < sizeof(studentData) / sizeof(studentData[0]); x++)
	{
		string parsedWord;
		string parsed = "";
		//std::cout << studentData[x] << std::endl;
		for (int i = 0; i < studentData[x].size(); i++) {
			if (studentData[x][i] != ',') {
				parsed += studentData[x][i];
				//std::cout << parsed << std::endl;
				if (i == (studentData[x].size() - 1))
				{
					parsedWord = parsed;
					listOfWords.push_back(parsedWord);
					parsed = "";
				}
				//std::cout << i << "\t" << studentData[x].size() << std::endl;
			}
			else {
				parsedWord = parsed;
				listOfWords.push_back(parsedWord);
				parsed = "";
				//std::cout << parsedWord << std::endl;
			}

		}
	};

	// *listOfStudents[5];

	for (int i = 0; i < 5; i++)
	{
		DegreeProgram degreeprogram = conversion(listOfWords[(i * 9) + 8]);
		test.add(
			listOfWords[i * 9], 
			listOfWords[(i * 9) + 1], 
			listOfWords[(i * 9) + 2], 
			listOfWords[(i * 9) + 3], 
			std::stoi(listOfWords[(i * 9) + 4]), 
			std::stoi(listOfWords[(i * 9) + 5]), 
			std::stoi(listOfWords[(i * 9) + 6]), 
			std::stoi(listOfWords[(i * 9) + 7]), 
			degreeprogram);

		//std::cout << listOfWords[i * 9] << "\t" << listOfWords[(i * 9) + 1] << "\t" << listOfWords[(i * 9) + 2] << "\t" << listOfWords[(i * 9) + 3] << "\t" << listOfWords[(i * 9) + 4] << "\t" << std::stoi(listOfWords[(i * 9) + 5]) << "\t" << listOfWords[(i * 9) + 6] << "\t" << listOfWords[(i * 9) + 7] << std::endl;
		//listOfStudents[i] = new Student(listOfWords[i * 9], listOfWords[(i * 9) + 1], listOfWords[(i*9)+2], listOfWords[(i*9)+3], std::stoi(listOfWords[(i*9)+4]), std::stoi(listOfWords[(i * 9) + 5]), std::stoi(listOfWords[(i * 9) + 6]), std::stoi(listOfWords[(i * 9) + 7]), degreeprogram);
		//std::cout << "Added New Student " << std::endl;
	}
	//std::string name= listOfStudents[0]->GetFirstName();
	//std::cout << "Student Name: " << name << std::endl;

	return 0;
}

DegreeProgram conversion(const string& str) {
	if (str == "SECURITY") return SECURITY;
	if (str == "NETWORK") return NETWORK;
	if (str == "SOFTWARE") return SOFTWARE;
}
