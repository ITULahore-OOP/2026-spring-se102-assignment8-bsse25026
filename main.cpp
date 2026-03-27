#include <iostream>
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

using namespace std;

int main(){
    AccessCard cardOne("AC-201", 1);
    AccessCard cardTwo("AC-305", 2);
    AccessCard cardThree("AC-410", 3);

    Student studentOne("Areeba", 101, 3.61);
    Staff staffOne("Mr. Salman", 201, 65000.0, cardThree);
    TeachingAssistant taOne("Sana", 301, 3.84, 18000.0, cardOne, 18);
    TeachingAssistant taTwo("Bilal", 302, 3.75, 16500.0, cardTwo, 16);

    Department department("Computer Science");
    department.addMember(&studentOne);
    department.addMember(&staffOne);
    department.addMember(&taOne);
    department.addMember(&taTwo);

    department.displayAllRoles();

    taOne.gradeAssignment(92);
    taOne.gradeAssignment("A-");

    TutoringSession sessionOne(1, 40.0, &taOne, &studentOne);
    TutoringSession sessionTwo(2, 35.0, &taOne, &studentOne);
    TutoringSession mergedSession = sessionOne + sessionTwo;

    mergedSession.displaySession();
    cout << (sessionOne > sessionTwo) << endl;

    return 0;
}
