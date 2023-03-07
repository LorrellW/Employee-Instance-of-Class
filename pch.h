#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int employee_id;
public:
    Employee(string n, int id);     // Constructor
    virtual double weekly_salary() = 0;      // Virtual function for calculating weekly salary
    virtual double health_care_contributions() = 0;      // Virtual function for calculating health care contributions
    virtual double vacation_days_earned() = 0;      // Virtual function for calculating vacation days earned
};


class Professional : public Employee { 
private:
    double pay_rate;
    int worked_hours;
public:
    Professional(string n, int id, double salary, int days);
    string get_name();
    double weekly_salary() override;
    double health_care_contributions() override;
    double vacation_days_earned() override;
};

class Nonprofessional : public Employee {  // Nonprofessional class declaration, derived from Employee

private:
    double pay_rate;
    int worked_hours;
public:
    Nonprofessional(string n, int id, double rate, int hours);
    double weekly_salary() override;
    double health_care_contributions() override;
    double vacation_days_earned() override;
    double weekly_salary(int hours_worked);
    double health_care_contributions(double salary);
    double vacation_days_earned(int hours_worked);
};


