#include <iostream>

using namespace std;

void showTable();
const int arraySize = 5;
int tab[arraySize];

int main()
{   
   for (int i = 0; i < arraySize; i++)
   {
       cout << "Get " << i + 1 << " number: ";
       cin >> tab[i];
       cin.ignore();
   } 
   
   showTable();

   int k, t;

   for (int i = 0; i < arraySize - 1; i++)
   {
       k = i;
       for (int j = i + 1; j < arraySize; j++)
       {
          if (tab[j] < tab[k])
	  {
             k = j;
          }
       }
       t = tab[i];
       tab[i] = tab[k];
       tab[k] = t;
   }
   return 0;
}

void showTable()
{
   cout << "Table: \n";
   for (int i = 0; i < arraySize; i++)
   {
       cout << i + 1 << ". = " << tab[i] << endl;
   }
}
