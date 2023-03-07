// Zeke White
// zewtxv@umsytem.edu
//

#include "Employee.h"
#include "Nonprofessional.h"

using namespace std;

//Nonprofessional default constructor
Nonprofessional::Nonprofessional() {
    healthCareContribution = pay * .08;
    employmentType = 'N';

}

//setter
int Nonprofessional::setHoursWorked(int hour) {
    hoursWorked = hour;
}