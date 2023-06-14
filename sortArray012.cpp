#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;


void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;
        int n = nums.size() ;
        // vector<int> answer(n);
        for(int i = 0 ;i<n;i++){
            if(nums[i] ==0){
                zero++;
            }
            else if(nums[i] ==1){
                one++;
            }
            else {
                two++;
            }
        }
        // int k = 0
        while(zero--){
            // answer[k] = 0;
            cout << 0 <<"," ;
        }
        while(one--){
            cout <<1 <<"," ;
        }
        while(two--){
            cout << 2 <<"," ;
        }
    }

    void sortColorsn(vector<int>& nums) {
        /* i am also solve this problem in O(2n) now i am solving this problem in O(n) */
        int n = nums.size() ;
        int low = 0;
        int mid = 0 ;
        int high = n -1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid]==1){
                mid++;
            }
            else {
                swap(nums[mid] , nums[high]);
                high--;
                // no change in mid same do i--

            }
        }

    }

    int main()
{

    /* print the Array which will be maximum sum */
    vector<int> nums = {2,2 ,0,1,0};
    sortColors(nums);
}