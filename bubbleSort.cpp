#include <iostream>

using namespace std;

void showTable();

const int ile = 5;
int tab[ile];

int main(void)
{   
    //Get number
    for (int i = 0; i < ile; i++)
    {
        cout << "Enter: " << i + 1 << " number: ";
	cin >> tab[i];
	cin.ignore();
    }
  
    showTable();

    //Bubble Sort
    int temp;

    for (int i = 0; i < ile - 1; i++)
    {   
	showTable();
        for (int j = 0; j < ile - 1; j++)
        {
	    if (tab[j] > tab[j + 1])
	    {
                temp = tab[j];
		tab[j] = tab[j + 1];
		tab[j + 1] = temp;
	    }
	}
    }
    
    showTable();
}

void showTable()
{
    cout << "Table: " << endl;
    for (int i = 0; i < ile; i++)
    {
        cout << i + 1 << ". = " << tab[i] << endl;
    }
}
