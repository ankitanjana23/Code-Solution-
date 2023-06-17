#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int cnt = 0; // 1 cnt its self
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                cnt++;
            }
        }
        if (cnt > (n / 2))
        {
            return nums[i];
        }
    }
    return -1;
}

    int majorityElementOptiml(vector<int> &nums)
    {
        int n = nums.size();
        int el;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt == 0)
            {
                el = nums[i];
                cnt = 1;
            }
            else if (el == nums[i])
                cnt++;
            else
                cnt--;
        }

        // counting
        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (el == nums[i])
                cnt1++;
        }
        if (cnt1 > (n / 2))
            return el;
        else
            return -1;
    }


int main()
{
    vector<int> matrix = {2, 1, 1, 1, 2, 2, 2};
    cout << "MY Answer: " << majorityElementOptiml(matrix) << endl;
}