#include <cstdint>
#include <iostream>
#include <string>
#include "Work.h"
using namespace std;

Work::Work()
{

    //ctor
    newCompanyName= "Name";
    newRole= "Name";
    newLocation="Name";
    newDescription="Name" ;
    newStartDate=0;
    newEndDate=0;
}

Work::~Work()
{
    //dtor
}
string Work::getCompanyName(){
return newCompanyName;
}
string Work::getRole()    {
return newRole;
}
string Work::getLocation(){
return newLocation;
}
string Work::getDescription(){
return newDescription;
}
int Work::getStartDate(){
return newStartDate;
}
int Work::getEndDate(){
return newEndDate;
}
