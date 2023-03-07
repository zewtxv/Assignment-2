// Zeke White
// zewtxv@umsytem.edu
//

#include "Employee.h"
#include <string>

using namespace std;
//default constructor, empty as base class
Employee::Employee() {}

//setters
void Employee::setName(string nameIn) {
    name = nameIn;
}

void Employee::setAge(int ageIn) {
    age = ageIn;
}

