#include "Employee.h"

double FullTimeEmployee::calculateSalary()
{
    return monthlyPay + bonus;
}

double PartTimeEmployee::calculateSalary()
{
    if (workHours <= 160)
        return hourlyPay * workHours;
    return hourlyPay * 160 + hourlyPay * 1.5 * (workHours - 160);
}

    