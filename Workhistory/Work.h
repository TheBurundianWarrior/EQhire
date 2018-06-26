#ifndef WORK_H
#define WORK_H

#include <cstdint>
#include <iostream>
#include <string>
using namespace std;

class Work{
public:
    Work();
    virtual ~Work();
    Work(string CompanyName, string position, string location);
    string getCompanyName();
    string getRole();
    string getLocation();
    string getDescription();
    int getStartDate();
    int getEndDate();

private:
    string newCompanyName;
    string newRole;
    string newLocation;
    string newDescription;
    int newStartDate;
    int newEndDate;
};

#endif // WORK_H
