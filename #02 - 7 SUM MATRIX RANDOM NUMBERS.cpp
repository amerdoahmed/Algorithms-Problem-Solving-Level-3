//#02 - 7 SUM MATRIX RANDOM NUMBERS

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

// My Solution 
void SumMatrix(int arr[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < Cols; j++)
        {
            sum += arr[i][j];
        }
        cout << " Row " << i + 1 << " Sum = " << sum << endl;
    }

}

// Dr Solution 
int RowSum(int arr[3][3], short RowNumber, short Cols)
{
    int Sum = 0;
    for (short j = 0; j < Cols - 1; j++)
    {
        Sum += arr[RowNumber][j];
    }

    return Sum;
}

void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
{
    cout << "The following are the sum of each row in the matrix:\n";
    for (short i = 0; i < Rows; i++)
    {
        cout << "Row" << i + 1 << " Sum = " << RowSum(arr, i, Cols) << endl;
    }
}

int main() {
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\n The following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    cout << endl;
    //cout << "The following are the sum of each row in the matrix:\n";
    //SumMatrix(arr, 3, 3);
    PrintEachRowSum(arr, 3, 3);


    system("pause>0");
}
