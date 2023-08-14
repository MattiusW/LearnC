#include <iostream>

using namespace std;

int addPositiveNumbers(int arr[], int length);

int main(void)
{  
   int n;
   int x;
   int *dynamicTable = new int(n);
   int table[7] = {-1, -2, -3, 0, 1, 2, 3};
   
   cout << "Enter positive value to table and I count this!" << endl; 
   cout << "Example: ";

   for (int i : table) 
   {
       cout << i << " "; 	
   }

   cout << endl;

   int array = addPositiveNumbers(table, 7);
   cout << "Example: " << array << endl;
   
   cout << "Enter length table: ";
   cin >> n;
   
   if (n > 0)
   {
      cout << "Enter value to table: " << endl;
      for (x = 0; x < n; x++)
      {
          cin >> dynamicTable[x];
      }
   }
   else
   {
      cout << "Wrong!" << endl;
      return 1;
   }
   
   cout << "You'r table: "; 

   for (x = 0; x < n; x++)
   {
      cout << dynamicTable[x] << " ";
   }

   cout << endl;

   int dynamicTotal = addPositiveNumbers(dynamicTable, n);
   cout << "Result positive numbers: " << dynamicTotal << endl;
   
   delete[] dynamicTable;
}

int addPositiveNumbers(int arr[], int length)
{  
   int total = 0;
   
   for (int i = 0; i < length; i++)
   {
      if (arr[i] > 0)
      {
         total += arr[i];  
      }
   }
   return total;
}

