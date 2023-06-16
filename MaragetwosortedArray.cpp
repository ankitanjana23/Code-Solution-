#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    /* array element shift one place right
    brute force solution */
    vector<int> nums3(m + n);
    int left = 0;
    int right = 0;
    int index;
    while (left < m && right < n)
    {
        if (nums1[left] > nums2[right])
        {
            nums3.push_back(nums2[right]);
            right++;
        }
        else
        {
            nums3.push_back(nums1[left]);
            left++;
        }
    }

    while (left < m)
    {
        nums3.push_back(nums1[left]);
        left++;
    }
    while (right < n)
    {
        nums3.push_back(nums2[right]);
        right++;
    }

    // put nums3 into nums1
    for (int i = 0; i < (m + n); i++)
    {
        nums1[i] = nums3[i];
        cout << nums1[i] << ",";
    }
}

int main()
{

    vector<int> arr1 = {1, 4, 8, 10};
    vector<int> arr2 = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
}
