#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int findMaxValue(int numbers[], int arraySize);
int findMaxValue(vector<int> numbers);
int findMinValue(int table[], int size);
int findMinValue(vector<int> numbers);

int main(void)
{
    int a = 4;
    int b = 2;
    int c = 50;

    const int size = 5;
    int sample[size] = {20, 2, -4, 150, 40};

    cout << "Max value of array one: " << findMaxValue(sample, size) << endl;
    cout << "Max value of vector: " << findMaxValue({a, b, c}) << endl;
    cout << "Max value of vector two: " << findMaxValue({a, 3, b, 341, c}) << endl;
    cout << "Min value of array one: " << findMinValue(sample, size) << endl;
    cout << "Min value of vector: " << findMaxValue({a, b, c}) << endl;
    
    //Library algotithm 
    cout << "Max adress of library c++: " << max_element(sample, sample + size) << endl; //adress
    cout << "Max value of vector library c++: " << *max_element(sample, sample + size) << endl; //pointer value
    cout << "Min adress of library c++: " << min_element(sample, sample + size) << endl; //adress
    cout << "Min value of vector library c++: " << *min_element(sample, sample + size) << endl; //pointer value
    //Library vector
    vector<int> tmpVector = {a, b, c};
    cout << "Max value of vector: " << *max_element(tmpVector.begin(), tmpVector.end()) << endl; 
    cout << "Min value of vector: " << *min_element(tmpVector.begin(), tmpVector.end()) << endl;
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

int findMinValue(int table[], int size)
{
    int min = table[0];   
    for (int i = 1; i < size; i++)
    {
        if (min > table[i])
	{
	    min = table[i];
	}
    }
    return min;
}

int findMinValue(vector<int> numbers)
{
    int min = numbers[0];
    for (auto i: numbers)
    {
        if (min < i)
	{
            min = i;
        }
    }
    return min;
}

