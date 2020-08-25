#include <iostream>
#include <cmath>
using namespace std;

class Person{
	private:
		int age;
	public:
		Person(int);
//		void setAge(int age){
//			this->age = age;
//		}
		int getAge(){
			return age;
		}	
};
Person::Person(int age){
			this->age = age;
		}
int main(){
	Person Person(100);
	cout << Person.getAge();
	return 0;
}


