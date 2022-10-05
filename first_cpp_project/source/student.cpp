#include "student.h"
using namespace std;

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{ // constructor
	SetID(studentID);
	SetFirstName(firstName);
	SetLastName(lastName);
	SetstudentEmail(emailAddress);
	SetstudentProgram(degreeProgram);
	SetstudentAge(age);
	SetDays(daysInCourse1, daysInCourse2, daysInCourse3);
};

// destructor
Student::~Student() {

};

void Student::SetID(std::string ID) {
	studentID = ID;
};
std::string Student::GetID() {
	return studentID;
};
void Student::printID() {
	std::cout << this->GetID();
};


void Student::SetFirstName(std::string fName) {
	firstName = fName;
};
std::string Student::GetFirstName() {
	return firstName;
};
void Student::printFName() {
	std::cout << this->GetFirstName();
};


void Student::SetLastName(std::string lName) {
	lastName = lName;
};
std::string Student::GetLastName() {
	return lastName;
};
void Student::printLName() {
	std::cout << this->GetLastName();
};


void Student::SetstudentEmail(std::string email) {
	studentEmail = email;
};
std::string Student::GetstudentEmail() {
	return studentEmail;
};
void Student::printEmail() {
	std::cout << this->GetstudentEmail();
};


void Student::SetstudentProgram(DegreeProgram program) {
	studentProgram = program;
};
DegreeProgram Student::GetstudentProgram() {
	return studentProgram;
};
void Student::printProgram() {
	DegreeProgram program= this->GetstudentProgram();
	if (program == SECURITY) cout << "SECURITY";
	if (program == SOFTWARE) cout << "SOFTWARE";
	if (program == NETWORK) cout << "NETWORK";
};


void Student::SetstudentAge(int age) {
	studentAge = age;
};
int Student::GetstudentAge() {
	return studentAge;
};
void Student::printAge() {
	std::cout << this->GetstudentAge();
};


void Student::SetDays(int days1, int days2, int days3) {
	daysInCourse1 = days1;
	daysInCourse2 = days2;
	daysInCourse3 = days3;
};

void Student::GetDays(int& day1, int& day2, int& day3) {
	day1 = daysInCourse1; // arrows are used with pointers
	day2 = daysInCourse2;
	day3 = daysInCourse3;
};

void Student::printDays() {
	int Day1;
	int Day2;
	int Day3;
	this->GetDays(Day1, Day2, Day3);
	std::cout <<"{"<< Day1 << ", " << Day2 <<", "<< Day3<<"}";
};

void Student::print() {
	printID();
	std::cout << "\t";

	printFName();
	std::cout << "\t";

	printLName();
	std::cout << "\t";

	printAge();
	std::cout << "\t";

	printDays();
	std::cout << "\t";

	printProgram();

	std::cout << std::endl;
};
