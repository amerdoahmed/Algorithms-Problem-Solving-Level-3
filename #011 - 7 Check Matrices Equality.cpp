//#011 - 7 Check Matrices Equality

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

// My Solution 
void EqualOrNot(int arr1[3][3], int arr2[3][3])
{
    int sum1 = SumOfMatrix(arr1, 3, 3);
    int sum2 = SumOfMatrix(arr2, 3, 3);

    if (sum1 == sum2)
    {
        cout << "YES, The two matrices are Equal";
    }
    else
    {
        cout << "NO, The two matrices are NOT Equal";
    }
}

// Dr Solution : 
bool AreEqualMAtrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    return (SumOfMatrix(Matrix1, Rows, Cols) == SumOfMatrix(Matrix2, Rows, Cols));
}


int main() {
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));


    int Matrix1[3][3];
    int Matrix2[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    FillMatrixWithRandomNumbers(Matrix2, 3, 3);

    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\n\nMatrix2:\n";
    PrintMatrix(Matrix2, 3, 3);


    cout << endl; cout << endl;

    //EqualOrNot(Matrix1, Matrix2);

    if (AreEqualMAtrices(Matrix1, Matrix2, 3, 3))
        cout << "\nYES: both matrices are equal.";
    else
        cout << "\nNo: matrices are NOT equal.";


    system("pause>0");
}
