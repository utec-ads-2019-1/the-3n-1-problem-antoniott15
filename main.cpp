#include <iostream>
#include <algorithm>
using namespace std;

void Logic(int MaxNumber, int MinNumber)
{
    for (int i = MaxNumber; i > MinNumber; i--)
    {
        do
        {
            if (MaxNumber % 2 == 1)
            {
                MaxNumber = (3 * MaxNumber) + 1;
                cout << MaxNumber << "\n";
            }
            if (MaxNumber % 2 == 0)
            {
                MaxNumber = MaxNumber / 2;
                cout << MaxNumber << "\n";
            }
        } while (MaxNumber != 1);
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
    return 0;
}