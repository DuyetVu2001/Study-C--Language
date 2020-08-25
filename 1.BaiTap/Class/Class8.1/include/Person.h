#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
    public:
        Person();
		Person(int);
		Person(int, string, string, string, int, string, string, string);
		void setId(int);
		void setLastName(string);
		void setMidName(string);
		void setFirstName(string);
		void setAge(int);
		void setGender(string);
		void setAddress(string);
		void setPhoneNumber(string);
		int getId();
		string getLastName();
		string getMidName();
		string getFirstName();
		int getAge();
		string getGender();
		string getAddress();
		string getPhoneNumber();

		void showInfo();
		void fullName();
    private:
        int id;
		string lastName;
		string midName;
		string firstName;
		int age;
		string gender;
		string address;
		string phoneNumber;
};

#endif // PERSON_H
