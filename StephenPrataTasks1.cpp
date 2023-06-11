#include <iostream> 
using namespace std;

double calToCm(double cal);

int main(void)
{
    double cal;
    double cm;

    cout << "Enter you'r height in cal: ";
    cin >> cal;
    cm = calToCm(cal); 
    cout << "You'r height is: " << cm << " cm." << endl; 

}

double calToCm(double cal)
{
    const double cm = 30.48;
    double amount = cal * cm;
    return amount;
}
