// Zeke White
// zewtxv@umsytem.edu
//

#include "Employee.h"
#include "Professional.h"


using namespace std;
//professional's default constructor
Professional::Professional() {
    employmentType = 'P';
    vacationDays = 30;
    pay = 75000;
    healthCareContribution = pay * .05;
}
