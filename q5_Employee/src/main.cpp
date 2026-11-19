#include "Employee.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string n, i;
    double pay, bonus;
    cin >> n >> i >> pay >> bonus;
    Employee* e1 = new FullTimeEmployee(n, i, pay, bonus);

    double hourly;
    int hours;
    cin >> n >> i >> hourly >> hours;
    Employee* e2 = new PartTimeEmployee(n, i, hourly, hours);

    cout << fixed << setprecision(2);
    cout << e1->getInfo() << ",月薪:" << e1->calculateSalary() << endl;
    cout << e2->getInfo() << ",月薪:" << e2->calculateSalary() << endl;

    delete e1;
    delete e2;
    return 0;
}