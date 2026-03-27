#include "Staff.h"
#include <iostream>

using namespace std;

Staff::Staff(string name, int memberID, double salary, AccessCard card): UniversityMember(name, memberID), salary(salary), card(card){
}

double Staff::getSalary() const{
    return salary;
}

void Staff::displayRole(){
 cout << "Role: Staff" << endl;
}

void Staff::displayCard() const{
    // Staff has an access card object inside it.
   card.displayCardInfo();
}
