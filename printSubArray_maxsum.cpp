#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> answer(n);
    int sum = 0;
    int maxi = INT_MIN;
    int start, end;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += nums[i];

        if (sum > maxi)
        {
            maxi = sum;
            end = i;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }

    // print vector
    int s = 0;
    for (int k = start; k <= end; k++)
    {
        answer[s] = nums[k];
        cout << answer[s] << " ";
    }
}

int main()
{

    /* print the Array which will be maximum sum */
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    maxSubArray(nums);
}