#include "Department.h"

Department::Department(string departmentName): departmentName(departmentName), memberCount(0){
    for(int i = 0; i < 50; i = i + 1){
        members[i] = 0;
    }
}

void Department::addMember(UniversityMember* member){
    if(memberCount < 50){
        members[memberCount] = member;
        memberCount = memberCount + 1;
    }
}

void Department::displayAllRoles(){
    for(int i = 0; i < memberCount; i = i + 1){
        members[i]->displayRole();
    }
}
