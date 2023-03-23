// Zeke White
// zewtxv@umsytem.edu
//
#ifndef ASSIGNMENT_2_NONPROFESSIONAL_H
#define ASSIGNMENT_2_NONPROFESSIONAL_H
class Nonprofessional : Employee
{
public:

    //Constructor
    Nonprofessional(string name, string address, double timeWorked, double hourlyRate);
    double healthCare ();
    int vacations();
    double weeklySalary();

private:
    double timeWorked;
    double hourlyRate;
    string name;
};
#endif //ASSIGNMENT_2_NONPROFESSIONAL_H
