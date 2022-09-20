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

void Student::SetFirstName(std::string fName) {
	firstName = fName;
};
std::string Student::GetFirstName() {
	return firstName;
};

void Student::SetLastName(std::string lName) {
	lastName = lName;
};
std::string Student::GetLastName() {
	return lastName;
};

void Student::SetstudentEmail(std::string email) {
	studentEmail = email;
};
std::string Student::GetstudentEmail() {
	return studentEmail;
};

void Student::SetstudentProgram(std::string program) {
	studentProgram = program;
};
std::string Student::GetstudentProgram() {
	return studentProgram;
};

void Student::SetstudentAge(int age) {
	studentAge = age;
};
int Student::GetstudentAge() {
	return studentAge;
};

void Student::SetDays(int days1, int days2, int days3) {
	numDays[0]=days1;
	numDays[1]=days2;
	numDays[2]=days3;

};