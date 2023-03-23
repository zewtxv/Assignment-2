// Zeke White
// zewtxv@umsytem.edu
//

#include <iostream>
#include "Employee.h"
#include "Professional.h"


using namespace std;
//professional's default constructor
Professional::Professional(string n,string a,double m) : Employee(n,a) {
    monthlySalary =m;
}

double Professional::weeklySalary()
{
    return monthlySalary / 4;
}

int Professional::vacations()
{
    return 30;
}

double Professional:: healthCare()
{
    return (2.0 * monthlySalary) / 3.0;
}


