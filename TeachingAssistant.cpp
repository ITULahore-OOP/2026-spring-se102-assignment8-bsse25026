#include "TeachingAssistant.h"
#include <iostream>

using namespace std;

TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa,
                                     double salary, AccessCard card,
                                     int workingHours)
    : UniversityMember(name, memberID), Student(name, memberID, cgpa),
      Staff(name, memberID, salary, card), workingHours(workingHours) {
  // ta is both a student and a staff member.
}

int TeachingAssistant::getWorkingHours() const{
    return workingHours;
}

void TeachingAssistant::displayRole(){
 cout << "Role: Teaching Assistant" << endl;
}

void TeachingAssistant::gradeAssignment(int score) {
  // This version is for checking marks as a number.
  cout << "numeric score: " << score << "/100" << endl;
}

void TeachingAssistant::gradeAssignment(string letterGrade) {
  // This version is for giving a letter grade.
  cout << "letter grade: " << letterGrade << endl;
}
