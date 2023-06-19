
#include <bits/stdc++.h>
using namespace std;

int reversePairs(vector<int>& nums) {
        int n = nums.size() ;
        int cnt = 0 ;
        for(int i = 0 ;i<n;i++){
            for(int j = i+1 ;j<n;j++){
                if(static_cast <long long int>(nums[i]) > 2LL*nums[j]) cnt++;
            }
        }
        return cnt ;
    }

int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int cnt = reversePairs(a);
    cout << "The number of reverse pair is: " <<cnt <<endl;
        
    /* by using merge sort how to solve */
}
