// Zeke White
// zewtxv@umsytem.edu
//
#ifndef ASSIGNMENT_2_PROFESSIONAL_H
#define ASSIGNMENT_2_PROFESSIONAL_H
class Professional : Employee
{
public:
    Professional(string n, string a, double m);

    //local variables
    double weeklySalary();
    int vacations();
    double healthCare();

private:
    double monthlySalary;
    string name;

};
#endif //ASSIGNMENT_2_PROFESSIONAL_H
