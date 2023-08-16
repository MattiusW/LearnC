#include <iostream>
using namespace std;

int copyReturn(int x);
int copyChangeReturn(int *y);

int main(void)
{  
   int copy = 10;
   cout << "Copy: " << copy << endl;
   cout << "Function one: " << copyReturn(copy) << endl;
   cout << "Not change copy: " << copy << endl;
   cout << "Function two: " << copyChangeReturn(&copy) << endl; //send adress to function
   cout << "Change copy: " << copy << endl;
}

int copyReturn(int x)
{
    x = 20;
    return x;
}

int copyChangeReturn(int *y)
{
    *y = 20;
    return *y;
}
