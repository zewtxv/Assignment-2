// Zeke White
// zewtxv@umsytem.edu
//

#include <string>

using namespace std;
#ifndef ASSIGNMENT_2_EMPLOYEE_H
#define ASSIGNMENT_2_EMPLOYEE_H

class Employee {
public:
    //public variables
    Employee(string name, string address);

    virtual double weeklySalary() = 0;

    virtual double healthCare() = 0;

    virtual int vacations() = 0;

private:
    string name;
    string address;
};

#endif //ASSIGNMENT_2_EMPLOYEE_H
