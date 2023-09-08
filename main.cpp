#include <iostream>
#include "human.h"
using namespace std;

int main(void)
{
   human im("Mateusz", "W"); //Static object
   im.setName("Lukas");
   cout << im.getSurname() << endl; 

   human* person = new human("Old", "Person"); //Dynamic location memory with pointer
   person->setName("New"); 
   cout << person->getSurname() << endl; //Pointer on function
   delete person; //Release memory
   
   //Everything static is delete in end
   
   const human staticHuman("Men", "Static");
   cout << staticHuman.getSurname() << endl;
   cout << (staticHuman + im).getSurname() << endl;
}

//Need compile to file:
//g++ main.cpp human.cpp
