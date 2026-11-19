#ifndef FRUIT_H
#define FRUIT_H

#include <iostream>
using namespace std;

class Fruit
{
    protected:
    string name;

    public:
    Fruit(string n) {name = n ;}
    virtual double pricePerKg() = 0;
    virtual ~Fruit() {}
    string getName() { return name; }
    
};

class Apple : public Fruit 
{
    public :
    Apple() : Fruit("Apple"){}
    double  pricePerKg();
};

class Banana : public Fruit
{
    public:
    Banana(): Fruit("Banana"){}
    double pricePerKg();
};

class Orange : public Fruit
{
    public:
    Orange():Fruit("Orange"){}
    double pricePerKg();
};

class Grape : public Fruit
{
    public:
    Grape():Fruit("Grape"){}
    double pricePerKg();
};

#endif