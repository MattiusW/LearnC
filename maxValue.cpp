#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int findMaxValue(int numbers[], int arraySize);
int findMaxValue(vector<int> numbers);

int main(void)
{
    int a = 4;
    int b = 2;
    int c = 50;

    const int size = 5;
    int sample[size] = {20, 2, -4, 150, 40};

    cout << "Max value of array one: " << findMaxValue(sample, size) << endl;
    cout << "Max value of array two: " << findMaxValue({a, b, c}) << endl;
    cout << "Max value of array three: " << findMaxValue({a, 3, b, 341, c}) << endl;
    
    //Library algotithm 
    cout << "Max adress of library c++: " << max_element(sample, sample + size) << endl; //adress
    cout << "Max value of library c++: " << *max_element(sample, sample + size) << endl;

    //Library vector
    vector<int> tmpVector = {a, b, c};
    cout << "Max value of vector: " << *max_element(tmpVector.begin(), tmpVector.end()) << endl; 

}

int findMaxValue(int numbers[], int arraySize)
{
    int max = numbers[0];
    for (int i = 1; i < arraySize; i++)
    {
        if (max < numbers[i])
	{
	    max = numbers[i];
	}
    }

    return max;
}

int findMaxValue(vector<int> numbers)
{
    int max = numbers[0];

    for (auto number: numbers)
    {
        if (max < number)
	{
            max = number;
        }
    }

    return max;
}
