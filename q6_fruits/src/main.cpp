#include "Fruit.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    Fruit* fruits[4];
    fruits[0] = new Apple();
    fruits[1] = new Banana();
    fruits[2] = new Orange();
    fruits[3] = new Grape();
  
    double total = 0;
    double w;

    for(int i = 0; i < 4;i++)
    {
        cout << fruits[i]->getName() << " 每公斤 " << fruits[i]->pricePerKg()
             << " 元，买几公斤：";
        cin>>w;
        total = total + w * fruits[i]->pricePerKg();
    }
    cout<<fixed<<setprecision(2);
    cout << "总价:" << total << " 元" << endl;


for(int i = 0;i < 4;i++)
{
    delete fruits[i];
}

return 0;
}