//#04 - 7 SUM COLS MATRIX RANDOM NUMBERS

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int randomNumber(int From, int To)
{
    int randNumber = rand() % (To - From + 1) + From;
    return randNumber;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = randomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int ColsSum(int arr[3][3], short Rows, short ColNumber)
{
    int Sum = 0;
    for (short i = 0; i <= Rows - 1; i++)
    {
        Sum += arr[i][ColNumber];
    }

    return Sum;
}

void PrintColsSumArray(int arr[3][3], short Rows, short Cols)
{
    cout << "The following are the sum of each column in the matrix:\n";
    for (short j = 0; j < Cols; j++)
    {
        cout << "Column" << j + 1 << " Sum = " << ColsSum(arr, Rows, j) << endl;
    }
}

int main() {
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
    cout << endl;
    PrintColsSumArray(arr, 3, 3);


    system("pause>0");
}