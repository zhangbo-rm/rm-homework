#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
private:
    string name;
    string id;
public:
    Employee(string n, string i) : name(n), id(i) {}
    string getInfo() { return "姓名:" + name + ",工号:" + id; }
    virtual double calculateSalary() = 0;
    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee
{
private:
    double monthlyPay;
    double bonus;
public:
    FullTimeEmployee(string n, string i, double m, double b)
        : Employee(n, i), monthlyPay(m), bonus(b) {}
    double calculateSalary();
};

class PartTimeEmployee : public Employee
{
private:
    double hourlyPay;
    int workHours;
public:
    PartTimeEmployee(string n, string i, double h, int w)
        : Employee(n, i), hourlyPay(h), workHours(w) {}
    double calculateSalary();
};

#endif