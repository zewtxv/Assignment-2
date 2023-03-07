// Zeke White
// zewtxv@umsytem.edu
//
#ifndef ASSIGNMENT_2_NONPROFESSIONAL_H
#define ASSIGNMENT_2_NONPROFESSIONAL_H
class Nonprofessional : Employee
{
public:

    //Constructor
    Nonprofessional();

    int setHoursWorked(int hour);
    //pre:takes in the amount of hours an employee worked
    //post: set the local variable of hoursWorked to the input hour

    //local variables
    int hoursWorked;
    int pay = hoursWorked * 12;
    int vacationDays = hoursWorked / 30;
};
#endif //ASSIGNMENT_2_NONPROFESSIONAL_H
