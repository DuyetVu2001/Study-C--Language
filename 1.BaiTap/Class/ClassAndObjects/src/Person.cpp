#include "Person.h"
#include<iostream>
#include<string>

using namespace std;

Person::Person()
{
    this->age = 0;
    this->pId = 0;
    this->firstName = "";
    this->lastName = "";
    this->midName = "";
    this->address = "";
    this->phoneNumber = "";
    this->gender = "";
}

Person::Person(int age, int id, string firstName, string lastName,
               string midName, string address, string phoneNumber, string gender)
{
    id = 99;
    setAge(age);
    setId(id);
    setFirstName(firstName);
    setMidName(midName);
    setLastName(lastName);
    setAddress(address);
    setPhoneNumber(phoneNumber);
    setGender(gender);
}

int Person::id = 100;

void Person::setAge(int age)
{
    this->age = (age >= 0) ? age : 0;
}
void Person::setId(int id)
{
    this->pId = (id >= 100) ? id : Person::id++;
}
void Person::setFirstName(string firstName)
{
    this->firstName = firstName;
}
void Person::setLastName(string lastName)
{
    this->lastName = lastName;
}
void Person::setMidName(string midName)
{
    this->midName = midName;
}
void Person::setAddress(string address)
{
    this->address = address;
}
void Person::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}
void Person::setGender(string gender)
{
   this->gender = gender;
}

int Person::getAge()
{
    return this->age;
}
int Person::getId()
{
    return this->pId;
}
string Person::getFirstName()
{
    return this->firstName;
}
string Person::getLastName()
{
    return this->lastName;
}
string Person::getMidName()
{
    return this->midName;
}
string Person::getAddress()
{
    return this->address;
}
string Person::getPhoneNumber()
{
    return this->phoneNumber;
}
string Person::getGender()
{
    return this->gender;
}
void Person::showInfo()
{
    cout << "========================================\n";
    cout << "ID: " << getId() << endl
        << "Last Name: " << getLastName() << endl
        << "Middle Name: "<< getMidName() << endl
        << "First Name: " << getFirstName() << endl
        << "Age: " << getAge() << endl
        << "Gender: " << getGender() << endl
        << "Phone Number: " << getPhoneNumber() << endl
        << "Address: " << getAddress() << endl;
    cout << "========================================\n";
}
string Person::fullName()
{
    return getLastName() + " " + getMidName() + " " + getFirstName();
}


















