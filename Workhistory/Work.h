#ifndef WORK_H
#define WORK_H


class Work
{
    public:
        Work();
        virtual ~Work();
        WORK_H(string,int);
string get CompanyName()
string get Role()
string get Location()
string get Description()
int get StartDate()
int get EndDate()




    private:
        string newCompanyName;
        string newRole;
        string newLocation;
        string newDescription;
        int newStartDate;
        int newEndDate;

};

#endif // WORK_H
