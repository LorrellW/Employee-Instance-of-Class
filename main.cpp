//Lorrell Winfield
// Assignment 2 Employee class
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Create a professional employee
    Professional prof("John Doe", 1234, 18, 40);

    // Calculate weekly salary, health care contributions, and vacation days earned
    cout << "Professional Employee:\n";
    cout << "Weekly Salary: $" << prof.weekly_salary() << "\n";
    cout << "Health Care Contributions: $" << prof.health_care_contributions() << "\n";
    cout << "Vacation Days Earned: " << prof.vacation_days_earned() << "\n\n";

    // Create a nonprofessional employee
    Nonprofessional nonprof("Jane Smith", 9999, 18, 40);

    // Calculate weekly salary, health care contributions, and vacation days earned for different amounts of hours worked
    cout << "Professional Employee:\n";
    cout << "Weekly Salary: $" << nonprof.weekly_salary(40) << "\n";
    cout << "Health Care Contributions: $" << nonprof.health_care_contributions(nonprof.weekly_salary(40)) << "\n";
    cout << "Vacation Days Earned: " << nonprof.vacation_days_earned(40) << "\n";


    return 0;
}