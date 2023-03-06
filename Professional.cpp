// Zeke White
// zewtxv@umsytem.edu
//

#include "Employee.h"
#include "Professional.h"


using namespace std;
Professional::Professional() {
    employmentType = 'P';
    vacationDays = 30;
    pay = 75000;
    healthCareContribution = pay * .05;
}
