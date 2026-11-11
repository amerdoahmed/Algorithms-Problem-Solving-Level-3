//#010 - 7 SUM OF MATRIX 

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
            arr[i][j] = randomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            //cout << setw(3) << arr[i][j] << " ";
            printf(" %0*d ", 2, arr[i][j]);
        }
        cout << "\n";
    }
}


int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
    short SumOfMatrix = 0;
    for (int i = 0;i < Rows;i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            SumOfMatrix += arr[i][j];
        }
    }
    return SumOfMatrix;
}


int main() {
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));


    int Matrix1[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nSum Of Matrix is : ";
    cout << SumOfMatrix(Matrix1, 3, 3);


    system("pause>0");
}
