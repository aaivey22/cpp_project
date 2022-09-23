#include <iostream>
#include "student.h"
#include <string>
#include <vector>

int main() {
	int numDays[3] = { 0, 2, 5 };
	Student Test("A1", "Reishi", "Ivey", "rivey@email.com", "Barkology", 2000, numDays); //constructor
	Test.printDays();
	std::string Pumpkin=Test.GetFirstName();
	std::cout << Pumpkin << std::endl;

	const std::string studentData[] =
	{
		"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY", 
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
		"A5,Angela,Ivey,aivey9wgu.edu,34,15,20,7,SOFTWARE" 
	};
	std::vector<std::string> listOfWords; // a vector is an array in which you do not know the "size" of the array
std::cout << "\n\n\n[[[[[[[[[[]]]]]]]]]]]]\n\n\n";

std::cout << "size: " << sizeof(studentData) << std::endl;
std::cout << "size: " << sizeof(studentData) / sizeof(studentData[1]) << std::endl;
std::cout << "\n\n\n[[[[[[[[[[]]]]]]]]]]]]\n\n\n";
	
	
	for (int x = 0; x < sizeof(studentData) / sizeof(studentData[0]); x++)
	{
		std::string parsed = "";
		char del = ','; // the delimeter in which you're parsing by
		for (int i = 0; i < (int)studentData[x].size(); i++) {
			if (studentData[x][i] != del) {
				parsed += studentData[x][i];
			}
			else {
				std::string parsedWord = parsed;
				listOfWords.push_back(parsedWord);
				parsed = "";
			}
		}
	};

	for (int i = 0; i < sizeof(listOfWords); i++)
	{
		std::cout << listOfWords[i] << std::endl;
	}
	return 0;
}
