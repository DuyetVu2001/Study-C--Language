#include <iostream>
#include <string>
using namespace std;

class Person{
	string firstName;
	string lastName;
	string id;
public:
	Person();
	Person(string id);
	Person(string id, string first, string last);
	string getId();
	string getFirst();
	string getLast();
	string getFullName();
	
};
Person::Person(){
	this->id = "";
	this->firstName = "";
	this->lastName = "";
}
Person::Person(string id){
	Person();
	this->id = id;
}
Person::Person(string id, string first, string last){
	this->id = id;
	this->firstName = first;
	this->lastName = last;
}
string Person::getId(){
	return this->id;
}
string Person::getFirst(){
	return this->firstName;
}
string Person::getLast(){
	return this->lastName;
}
string Person::getFullName(){
	return this->lastName + " " + this->firstName;
}

class Student : public Person{
	string studentId;
	float mark;
	double fee;
public:
	Student();
	Student(string, float, float);
	Student(string id, string first, string last, string, float, double);
	void study(string);
	void payFee(float);
	void doExam(string);
	void show();
};
Student::Student(string id, string first, string last,
			string studentId, float mark, double fee) : Person(id, first, last){
	this->studentId = studentId;
	this->mark = mark;
	this->fee = fee;
}
void Student::show(){
	cout << "ID: " << getId() << endl;
	cout << "Full Name: " << getFullName() << endl;
	cout << "Student ID: " << this->studentId << endl;
	cout << "Mark: " << this->mark << endl;
	cout << "Fee: " << this->fee << " trieu vnd." << endl;
}

class Employee : public Person{
	string eId;
	float sallary;
	string role;
public:
	Employee();
	Employee(string, float, string);
	void doHisWork();
	void goToWorkSpace();
	void getPayment();		
};

int main(){
	Student a("12A2", "Hoang", "Biu", "qwe2019", 9.75, 10.5);
	a.show();
	return 0;
}






