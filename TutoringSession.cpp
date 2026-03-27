#include "TutoringSession.h"
#include <iostream>

using namespace std;

TutoringSession::TutoringSession(int sessionID, double durationMinutes,
                                 TeachingAssistant* ta, Student* student)
    : sessionID(sessionID), durationMinutes(durationMinutes), ta(ta), student(student){
}

double TutoringSession::getDuration() const{
    return durationMinutes;
}

void TutoringSession::displaySession() const{
 cout << sessionID << endl;
 cout << durationMinutes << endl;

 if (ta != 0){
  cout << ta->getName() << endl;
 }

 if (student != 0){
  cout << student->getName() << endl;
 }
}

TutoringSession TutoringSession::operator+(const TutoringSession& other) const{
    // Adding two sessions means adding their durations.
   return TutoringSession(sessionID + other.sessionID,
   durationMinutes + other.durationMinutes, ta, student);
}

bool operator>(TutoringSession s1, TutoringSession s2){
    return s1.getDuration() > s2.getDuration();
}
