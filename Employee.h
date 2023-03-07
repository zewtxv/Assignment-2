// Zeke White
// zewtxv@umsytem.edu
//

#include <string>
using namespace std;
#ifndef ASSIGNMENT_2_EMPLOYEE_H
#define ASSIGNMENT_2_EMPLOYEE_H
class Employee
{
public:
    //public variables
    Employee();
    string name;
    int age;
    char employmentType;
    int healthCareContribution;

    //public functions
    void setName(string nameIn);
    //PRE: Takes in a desired name to be set as string.
    //POST: Sets the local string variable to the input

    void setAge(int ageIn);
    //PRE: takes in a desired age to be set
    //post: sets a local variable to the input ageIn variable
};
#endif //ASSIGNMENT_2_EMPLOYEE_H
