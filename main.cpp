#include <iostream>
#include <algorithm>
using namespace std;

void OrderMax(int &, int &);
int Maxcycle(int, int);
int Logic(int);

int main()
{
    int input1, input2, numberCycles;
    cout << "Input: \n";
    cin >> input1 >> input2;
    numberCycles = Maxcycle(input1, input2);
    cout << numberCycles;
}

void OrderMax(int &input1, int &input2)
{
    if (input2 < input1)
    {
        swap(input1, input2);
    }
}

int Maxcycle(int input1, int input2)
{
    OrderMax(input1, input2);

    int maxCycle = 0;
    for (int i = input1; i <= input2; i++)
    {
        int cycle = Logic(i);
        if (cycle > maxCycle)
        {
            maxCycle = cycle;
        }
    }

    return maxCycle;
}

int Logic(int MaxNumber)
{
    int count = 1;
    while (MaxNumber != 1)
    {
        if (MaxNumber % 2 == 1)
        {
            count++;
            MaxNumber = (3 * MaxNumber) + 1;
        }
        if (MaxNumber % 2 == 0)
        {
            count++;
            MaxNumber = MaxNumber / 2;
        }
    }
    return count;
}