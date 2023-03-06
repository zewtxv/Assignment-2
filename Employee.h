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
    Employee();
    string name;
    int age;
    char employmentType;
    int healthCareContribution;

    void setName(string nameIn);

    void setAge(int ageIn);
};
#endif //ASSIGNMENT_2_EMPLOYEE_H
