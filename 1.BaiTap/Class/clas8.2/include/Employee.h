#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    public:
        Employee();

    private:
        static int id;
        int pId;
        string fullName;
        string address;
        string position;
        string phoneNumber;
        string salary;
};

#endif // EMPLOYEE_H
