/* more optimal solution n^2 */

#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    /*  O(n^3) Time complexity first technique if I am replace all 0 to -1
    and Input array gives -1 in this case it will also replce with 0 dont Do it ! */

    int n = matrix.size();    // number of rows
    int m = matrix[0].size(); // row=0 so number of columns
    int row[n] ;
    int column[m] ; // all element inside the row and coloumn zero
    for(int i = 0 ;i<n;i++){
        row[i] = 0;
    }

    for(int j = 0 ;j<m ; j++){
        column[j] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }

    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || column[j])
            {
                matrix[i][j] = 0;
            }
            cout << matrix[i][j] << ",";
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{-1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int m = matrix.size();
    int n = matrix[0].size();
    setZeroes(matrix);
}