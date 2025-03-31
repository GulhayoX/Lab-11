#include <iostream>
using namespace std;

void inputMatrix(int matrix[][100], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

}
int main() {
    // problem 1
    // int row = 0, col = 0;
    // cout << "Number of rows: ";
    // cin >> row;
    // cout << "Number of columns:";
    // cin >> col;
    // int matrix[100][100];
    // inputMatrix(matrix, row, col);
    //     int sum = 0;
    //     for (int i = 0; i < row; i++){
    //         for (int j = 0; j < col; j++) {
    //             sum += matrix[i][j];
    //         }
    //     }
    // cout << "Sum of numbers in the matrix is " << sum << endl;
    // problem 2
    // int row = 0, col = 0;
    // cout << "Number of rows: ";
    // cin >> row;
    // cout << "Number of columns:";
    // cin >> col;
    // int matrix[100][100];
    // inputMatrix(matrix, row, col);
    // int maxValue = 0;
    // for (int i = 0; i < row; i++) {
    //     maxValue = matrix[i][0];
    //     for (int j = 0; j < col; j++) {
    //         if (maxValue < matrix[i][j]) {
    //             maxValue = matrix[i][j];
    //         }
    //     }
    //     cout << maxValue << endl;
    // }

    //problem 3
    // int row = 0, col = 0;
    // cout << "Number of rows: ";
    // cin >> row;
    // cout << "Number of columns:";
    // cin >> col;
    // int matrix[100][100];
    // inputMatrix(matrix, row, col);
    // int sum = 0;
    // for (int i = 0; i < col; i++) {
    //     sum = 0;
    //     for (int j = 0; j < row; j++) {
    //         sum += matrix[j][i];
    //     }
    //     cout << sum << " ";
    // }

    // problem 4
    // int num = 0, sum = 0;
    // cin >> num;
    // int matrix[100][100];
    // inputMatrix(matrix, num, num);
    // for (int i = 0; i < num; i++) {
    //     sum += matrix[i][i];
    // }
    // cout << sum << endl;

    // problem 5
    // int row = 0, col = 0;
    // cout << "Number of rows: ";
    // cin >> row;
    // cout << "Number of columns:";
    // cin >> col;
    // int matrix[100][100], new_matrix[col][row];
    // inputMatrix(matrix, row, col);
    // for (int i = 0; i < col; i++) {
    //     for (int j = 0; j < row; j++) {
    //         new_matrix[i][j] = matrix[j][i];
    //     }
    // }
    // for (int i = 0; i < col; i++) {
    //     for (int j = 0; j < row; j++) {
    //         cout << new_matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // problem 6
    // int row = 0, col = 0;
    // cout << "Number of rows: ";
    // cin >> row;
    // cout << "Number of columns:";
    // cin >> col;
    // int matrix[100][100];
    // inputMatrix(matrix, row, col);
    // int row1 = 0, col1 = 0;
    // cout << "Number of rows: ";
    // cin >> row1;
    // cout << "Number of columns:";
    // cin >> col1;
    // int matrix1[100][100], newMatrix[100][100];
    // inputMatrix(matrix1, row, col);
    // if (row1 == row && col1 == col)
    // {
    //     for (int i = 0; i < row; i++)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //             for (int k = 0; k < col; k++)
    //             {
    //                 newMatrix[i][j] += matrix[i][k] * matrix1[k][j];
    //             }
    //         }
    //     }
    //     for (int i = 0; i < row; i++)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //             cout << newMatrix[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    // problem 7
    // int row = 0;
    // cout << "Number N: ";
    // cin >> row;
    // int matrix[100][100], newmatrix[100][100];
    // inputMatrix(matrix, row, row);
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         newmatrix[i][j] = matrix[2-j][i];
    //     }
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         cout << newmatrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // problem 8



    return 0;
}