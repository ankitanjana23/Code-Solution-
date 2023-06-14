#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;



int maxSubArray(vector<int>& nums) {
        vector<int> answer(nums.size()) ;
        int k = 0 ;
        for(int i = 0 ;i<nums.size() ;i++){
            int sum = 0 ;
            for(int j = i ;j<nums.size();j++){
                
            sum += nums[j];
            answer.push_back(sum) ;
            k++;
            cout <<answer[0];
            } 
            
        }

        

         
        //find the maximum inside the vector and return 
        int max = INT_MIN ;
        int size = answer.size();
        for(int i =0 ;i<size;i++){
            if(max<answer[i]){
                max = answer[i];
            }
        }
        return max;
        
    }

    int main(){
     
     vector<int> nums = {-1} ;
     cout<< maxSubArray(nums) ;
}