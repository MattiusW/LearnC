#include <iostream>
#include <string>
#include "human.h"
using namespace std;

human::human(string name, string surname)
{
    this->name = name;
    this->surname = surname;
}

human::~human()
{
    cout << "Destroy human" << endl;
}

human operator+(const human& p1, const human& p2)
{
    human person(p1.name + p2.name, p1.surname + p2.surname);
    return person;
}
