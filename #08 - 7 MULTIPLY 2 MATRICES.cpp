//#08 - 7 MULTIPLY TWO MATRICES

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


void MultiplyMatrix(int arr[3][3], int arrX[3][3], int arrY[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = arrX[j][i] * arrY[i][j];
        }
    }
}


int main() {
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[3][3]; int arrX[3][3]; int arrY[3][3];

    FillMatrixWithRandomNumbers(arrX, 3, 3);
    cout << "\nThe following is first array:\n";
    PrintMatrix(arrX, 3, 3);

    FillMatrixWithRandomNumbers(arrY, 3, 3);
    cout << "\nThe following is third array:\n";
    PrintMatrix(arrY, 3, 3);

    MultiplyMatrix(arr, arrX, arrY, 3, 3);
    cout << "\nThe following is multiply the first array and third array:\n";
    PrintMatrix(arr, 3, 3);


    system("pause>0");
}
