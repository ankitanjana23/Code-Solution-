#include <iostream>
#include <vector>
using namespace std;

int factorialNCR(int numerator, int denomenator)
{
    int nums = 1;
    for (int i = 0; i < denomenator; i++)
    {
        nums = nums * (numerator - i);
        nums = nums / (i + 1);
    }
    return nums;
}

vector<vector<int>> generate(int numRows)
{
    // store the answer of factorial in 2D vector form initalize vecter
    vector<vector<int>> matrix(numRows); //
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int numerator = i;
            int denomenator = j;
            matrix[i].push_back(factorialNCR(i, j)); // push back element in ith row
        }
    }
    return matrix;
}
void printmatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << matrix[i][j] << ",";
        }
        cout << endl;
    }
}

int main()
{
    int numRows;
    vector<vector<int>> matrix = generate(5);
    printmatrix(matrix);
}