#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main()
{
    Person person(13, "Vu", "Ngoc", "Duyet", 19, "Male", "1213", "0379446167");
    person.fullName();
    person.showInfo();
    return 0;
}
