#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

void Person::setId(int id)
{
    this->id = id;
}
void Person::setLastName(string lastName)
{
    this->lastName = lastName;
}
void Person::setMidName(string midName)
{
    this->midName = midName;
}
void Person::setFirstName(string firstName)
{
    this->firstName = firstName;
}
void Person::setAge(int age)
{
    this->age = age;
}
void Person::setGender(string gender)
{
    this->gender = gender;
}
void Person::setAddress(string address)
{
    this->address = address;
}
void Person::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}
int Person::getId()
{
    return id;
}
string Person::getLastName()
{
    return lastName;
}
string Person::getMidName()
{
    return midName;
}
string Person::getFirstName()
{
    return firstName;
}
int Person::getAge()
{
    return age;
}
string Person::getGender()
{
    return gender;
}
string Person::getAddress()
{
    return address;
}
string Person::getPhoneNumber()
{
    return phoneNumber;
}
Person::Person()
{
    id = 0;
	lastName = "";
	midName = "";
	firstName = "";
	age = 0;
	gender = "";
	address = "";
	phoneNumber = "";
}

Person::Person(int id, string lastName, string midName, string firstName, int age,
               string gender, string address, string phoneNumber)
{
    setId(id);
    setLastName(lastName);
    setMidName(midName);
    setFirstName(firstName);
    setAge(age);
    setGender(gender);
    setAddress(address);
    setPhoneNumber(phoneNumber);
}

void Person::showInfo()
{
    cout << "\n=====================================\n";
    cout << "ID: " << getId() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Middle Name: " << getMidName() << endl;
    cout << "First Name: " << getFirstName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Gender: " << getGender() << endl;
    cout << "Address: " << getAddress() << endl;
    cout << "Phone Number: " << getPhoneNumber() << endl;
    cout << "\n=====================================\n";
}
void Person::fullName()
{
    cout << "FULL NAME: " << getLastName() << " " << getMidName() << " " << getFirstName() << endl;
}













