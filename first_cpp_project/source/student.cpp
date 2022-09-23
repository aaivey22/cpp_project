#include "student.h"

Student::Student(std::string ID, std::string fName, std::string lName, std::string email, std::string program, int age, int numdays[3]) { //constructor
	SetID(ID);
	SetFirstName(fName);
	SetLastName(lName);
	SetstudentEmail(email);
	SetstudentProgram(program);
	SetstudentAge(age);
	SetDays(numdays[0], numdays[1], numdays[2]);
};
Student::~Student() {

};

void Student::SetID(std::string ID) {
	studentID = ID;
};
std::string Student::GetID() {
	return studentID;
};
void Student::printID() {
	std::cout << this->GetID() << std::endl;
};


void Student::SetFirstName(std::string fName) {
	firstName = fName;
};
std::string Student::GetFirstName() {
	return firstName;
};
void Student::printFName() {
	std::cout << this->GetFirstName() << std::endl;
};


void Student::SetLastName(std::string lName) {
	lastName = lName;
};
std::string Student::GetLastName() {
	return lastName;
};
void Student::printLName() {
	std::cout << this->GetLastName() << std::endl;
};


void Student::SetstudentEmail(std::string email) {
	studentEmail = email;
};
std::string Student::GetstudentEmail() {
	return studentEmail;
};
void Student::printEmail() {
	std::cout << this->GetstudentEmail() << std::endl;
};


void Student::SetstudentProgram(std::string program) {
	studentProgram = program;
};
std::string Student::GetstudentProgram() {
	return studentProgram;
};
void Student::printProgram() {
	std::cout << this->GetstudentProgram() << std::endl;
};


void Student::SetstudentAge(int age) {
	studentAge = age;
};
int Student::GetstudentAge() {
	return studentAge;
};
void Student::printAge() {
	std::cout << this->GetstudentAge() << std::endl;
};


void Student::SetDays(int days1, int days2, int days3) {
	numDays[0]=days1;
	numDays[1]=days2;
	numDays[2]=days3;

};
void Student::GetDays(int& day1, int& day2, int& day3) {
	day1 = this->numDays[0]; // arrows are used with pointers
	day2 = this->numDays[1];
	day3 = this->numDays[2];

};
void Student::printDays() {
	int Day1;
	int Day2;
	int Day3;
	this->GetDays(Day1, Day2, Day3);
	std::cout << Day1 << ", " << Day2 <<", "<< Day3<< std::endl;
};
