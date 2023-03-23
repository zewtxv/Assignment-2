// Zeke White
// zewtxv@umsytem.edu
//

#include "Employee.h"
#include "Nonprofessional.h"
#include <iostream>

using namespace std;

//Nonprofessional default constructor
Nonprofessional::Nonprofessional(string n, string a, double w, double h) : Employee(n,a)
{
   timeWorked = w;
   hourlyRate = h;

}

double Nonprofessional :: weeklySalary()
{
    return timeWorked * hourlyRate;
}

int Nonprofessional:: vacations()
{
    return 12;
}

double Nonprofessional :: healthCare()
{
    return weeklySalary() / 2.0;
}