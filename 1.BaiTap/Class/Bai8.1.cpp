#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Person{
	
	public:
		Person();
		Person(int);
		Person(int, string, string, string, int, string, string, int);
		void setId(int);
		void setLastName(string);
		void setMidName(string);
		void setFirstName(string);
		void setAge(int);
		void setGender(string);
		void setAddress(string);
		
		int getAge(){
			return age;
		}
		
	private:
		int id;
		string lastName;
		string midName;
		string firstName;
		int age;
		string gender;
		string address;
		int phoneNumber;
};

Person::Person(){
	id = 0;
	lastName = "";
	midName = "";
	firstName = "";
	age = 0;
	gender = "";
	address = "";
	phoneNumber = 0;
}

Person::Person(int id, string lasrN, string midN, string firstN,
	 int age, string gender, string address, int phone){
	 	
	 }
void Person::setAge(int age){
	this->age = age;
}

Person::Person(int age){
	setAge(age);
}
	 


int main(){
	Person Person(12);
	cout << Person.getAge();
	return 0;
}

