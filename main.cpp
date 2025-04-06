#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

void inputMatrix(int matrix[][100], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

}
int n_vowels(string s) // for string problem 1
{
    int n = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            n++;
        }
    }
    return n;
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

    // problem 1 - Strings
    // string word;
    // cin >> word;
    // cout << n_vowels(word) << ' ' << word.length()-n_vowels(word) << endl;

// problem 2
    // string word;
    // cin >> word;
    // for (int i = word.length(); i!=-1; i--)
    // {
    //     cout << word[i];
    // }
// problem 3
    // string p_word;
    // cin >> p_word;
    // bool is_palindrome = true;
    // for (int i = 0; i < p_word.length()/2; i++)
    // {
    //     if (p_word[i] != p_word[p_word.length() - 1 - i])
    //     {
    //         is_palindrome = false;
    //     }
    // }
    // if (is_palindrome)
    // {
    //     cout << "Palindrome";
    // }
    // else
    // {
    //     cout << "Not palindrome";
    // }

// problem 4
    // string word;
    // cin >> word;
    // char freq[26] = {0}, max = 0;
    // int max_freq = 0;
    // for (char c : word)
    // {
    //     freq[c - 'a'] ++;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (freq[i] > max_freq)
    //     {
    //         max_freq = freq[i];
    //         max = 'a' + i;
    //     }
    // }
    // cout << max << endl;

    // problem 5
    // string input;
    // cin >> input;
    // bool seen[26] = {false};
    // string result = "";
    // for (char c : input) {
    //     int index = c - 'a';
    //     if (!seen[index]) {
    //         seen[index] = true;
    //         result += c;
    //     }
    // }
    // cout << result << endl;

    // problem 6
    // string sentence;
    // getline(cin, sentence);
    // istringstream iss(sentence);
    // string word;
    // string longest = "";
    // while (iss >> word) {
    //     if (word.length() > longest.length()) {
    //         longest = word;
    //     }
    // }
    // cout << longest << endl;

    // problem 7
    string str1, str2;
    cin >> str1 >> str2;

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

