#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    if (!n)
        return false;
    int m = matrix[0].size();
    int low = 0;
    int high = (n * m) - 1;
    while (low <= high)
    {
        int mid = (low + (high - low) / 2);
        if (matrix[mid / m][mid % m] == target)
        {
            return true;
        }
        else if (matrix[mid / m][mid % m] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7},
                                  {10, 11, 16, 20},
                                  {23, 30, 34, 60}};
    int target = 30;
    cout << "My Final Output : " << searchMatrix(matrix, target) << endl;
}