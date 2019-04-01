#include <iostream>
#include <algorithm>
using namespace std;

void maxValue(int count, int temp)
{
    int temp;
    if (count > temp)
    {
        temp = count;
    }
}
void Logic(int MaxNumber, int MinNumber)
{
    for (int i = MaxNumber; i >= MinNumber; i--)
    {
        int count = 0, value;
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
        count = count + 1;
        maxValue(count);
        MaxNumber = i - MaxNumber;
    }
}
int MaxNumberFunc(int input, int input2)
{
    return max(input, input2);
}

int MinNumberFunc(int input, int input2)
{
    return min(input, input2);
}
int main()
{
    int input, input2, MaxNumber, MinNumber;
    cout << "Input: \n";
    cin >> input >> input2;
    MaxNumber = MaxNumberFunc(input, input2);
    MinNumber = MinNumberFunc(input, input2);
    Logic(MaxNumber, MinNumber);
    cout << temp;
    return 0;
}