#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

void getPersonInfo(Person *ps, size_t N)
{
    int age;
	string first, last, mid, add, phone, gender;
	for(size_t i = 0; i < N; i++)
    {
        cout << "First Name ";
        cin >> first;
        cout << "Last Name: ";
        cin >> mid;
        cout << "Middle Name: ";
        cin.ignore();
        getline(cin, mid);
        cout << "Address: ";
        getline(cin, add);
        cout << "Phone Number: ";
        getline(cin, phone);
        cout << "Gender: ";
        getline(cin, gender);
        cout << "Age: ";
        cin >> age;

        Person p(age, 0, first, last, mid, add, phone, gender);
        ps[i] = p;
    }
}

void showPersonInfo(Person *ps, size_t N)
{
    for(size_t i = 0; i < N; i++)
    {
        ps[i].showInfo();
    }
}

int main()
{
    size_t N; //So nguoi
    cout << "Enter number of person: ";
    cin >> N;

    Person people[N];

    //Nhap mang
    getPersonInfo(people, N);
    //Hien thi ds
    showPersonInfo(people, N);
    return 0;
}








