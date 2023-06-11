#include <iostream>
using namespace std;

double calToCm(double cal);
double bmi(int feet, double funt);

int main(void)
{
    double cal;
    double cm;
    int feet;
    double funt;
    long bmiAmount;

    cout << "Enter you'r height in cal: ";
    cin >> cal;
    cm = calToCm(cal); 
    cout << "You'r height is: " << cm << " cm." << endl; 

    cout << "Enter you'r height in feet: ";
    cin >> feet;
    cout << "Enter You'r weight in funt: ";
    cin >> funt;
    bmiAmount = bmi(feet, funt); 
    cout << "You'r bmi is: " << bmiAmount << endl; 

}

double calToCm(double cal)
{
    const double cm = 30.48;
    double amount = cal * cm;
    return amount;
}

double bmi(int feet, double funt)
{
    const long m = 0.0254; 
    int height = feet * 12;
    long meter = long(height) * m;
    long kilo = funt / 2.2;
    long bmi = kilo / (long(height) * long(height));   
    
    return bmi;
}

