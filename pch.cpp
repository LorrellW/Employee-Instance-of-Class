
#include "pch.h"
using namespace std;

// Employee class implementation
Employee::Employee(string n, int id) : name(n), employee_id(id) {}

// Professional class implementation
Professional::Professional(string n, int id, double payRate, int hours)
    : Employee(n, id), pay_rate(payRate), worked_hours(hours) {}


double Professional::weekly_salary() {
    return pay_rate * worked_hours;  // pay rate * hours worked
}

double Professional::health_care_contributions() {
    return 10 * pay_rate;  // 10 * payrate will equal weekly healthcare contributions
}

double Professional::vacation_days_earned() {
    return (pay_rate / 12.0) -1;  // pay rate divided by 12 all -1 = vaction days earned
}

// Nonprofessional class implementation
Nonprofessional::Nonprofessional(string n, int id, double rate, int hours) 
    : Employee(n, id), pay_rate(rate), worked_hours(hours) {}

double Nonprofessional::weekly_salary(int hours_worked) {
    return pay_rate * worked_hours;  // pay rate * hours worked
    
}

double Nonprofessional::health_care_contributions(double salary) {
    return 0.05 * salary;  // assume 5% contribution
}

double Nonprofessional::vacation_days_earned(int hours_worked) {
    return (pay_rate / 13) - 1;  // pay rate divided by 13 all -1 = vaction days earned
}

double Nonprofessional::weekly_salary() {
    return 0.0; // This function is not used in Nonprofessional class, so just return 0
}

double Nonprofessional::health_care_contributions() {
    return 0.0; // This function is not used in Nonprofessional class, so just return 0
}

double Nonprofessional::vacation_days_earned() {
    return 0.0; // This function is not used in Nonprofessional class, so just return 0
}
