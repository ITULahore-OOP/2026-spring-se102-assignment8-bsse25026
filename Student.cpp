#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name, int memberID, double cgpa): UniversityMember(name, memberID), cgpa(cgpa){
}

double Student::getCGPA() const{
    return cgpa;
}

void Student::updateCGPA(double newCGPA){
    // This lets us update the student's CGPA later.
    cgpa = newCGPA;
}

void Student::displayRole(){
 cout << "Role: Student" << endl;
}
