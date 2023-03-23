// Zeke White
// zewtxv@umsytem.edu
//

#include "Employee.h"
#include "SingleLinkedList.h"
#include "Nonprofessional.h"
#include "Professional.h"
#include <iostream>

using namespace std;

int main() {
    SingleLinkedList List;
    Item_Type item;
    // linked list
    for (int i = 10; i > 0; i--)
    {
        item.size = i;
        List.push_back(item);
    }
    cout << "contents: " << endl;
    List.printSingleLinkedList();

    cout << "pop_front(): " << endl;
    List.pop_front();
    List.printSingleLinkedList();

    cout << "pop_back(): " << endl;
    List.pop_back();
    List.printSingleLinkedList();

    cout << "push_front(): " << endl;
    item.size = 80;
    List.push_front(item);
    List.printSingleLinkedList();

    cout << "push_back(): " << endl;
    item.size = 55;
    List.push_back(item);
    List.printSingleLinkedList();

    cout << "insert():  " << endl;
    item.size = 94;
    List.insert(3, item);
    List.printSingleLinkedList();

    cout << "remove(): " << endl;
    List.remove(1);
    List.printSingleLinkedList();

    cout << "Finding values 6" << endl;
    item.size = 6;
    cout << "At index: " << List.find(item) << endl << endl;

    cout << "Size: " << List.getNumItems() << endl;
    cout << "Front: " << List.front()->item.size << endl;
    cout << "Back: " << List.back()->item.size << endl;




    // PART 2


    cout << "NONPROFESSIONAL EMPLOYEE " << endl;
    Nonprofessional nonprofessional("Tim", "Apple", 40, 17);
    cout << "Name: Tim"<<endl;
    cout << "Weekly Salary: $" << nonprofessional.weeklySalary() << endl;
    cout << "Health care allowance: $" << nonprofessional.healthCare() << endl;
    cout << "Vacations days: " << nonprofessional.vacations() << endl << endl;

    cout << endl <<  "PROFESSIONAL EMPLOYEE " << endl;
    Professional professional("Bill", "Cerner", 12000);
    cout << "Name: Bill" << endl;
    cout << "Weekly Salary: $" << professional.weeklySalary() << endl;
    cout << "Health care allowance: $" << professional.healthCare() << endl;
    cout << "Vacations  days: " << professional.vacations() << endl << endl;



}


