// Zeke White
// zewtxv@umsytem.edu
//
#ifndef ASSIGNMENT_2_NONPROFESSIONAL_H
#define ASSIGNMENT_2_NONPROFESSIONAL_H
class Nonprofessional : Employee
{
public:
    Nonprofessional();
    int hoursWorked;
    int setHoursWorked(int hour);
    int pay = hoursWorked * 12;
    int vacationDays = hoursWorked / 30;

};
#endif //ASSIGNMENT_2_NONPROFESSIONAL_H
