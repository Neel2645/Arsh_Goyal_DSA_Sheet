//! Leetcode - 78 :- Subsets

//* Method - 1
//? TC - O(N * (2^n))
//? SC - O(N * (2^n))

class Solution {
    public:
    
        void getAllSubsets(vector<int>&nums , vector<int>&arr , int i , vector<vector<int>>& ans)
        {
            if(i >= nums.size()){
                ans.push_back(arr);
                return;
            }
    
            //include
            arr.push_back(nums[i]);
            getAllSubsets(nums,arr,i+1,ans);
    
            //exclude
            arr.pop_back(); //backtrack
            getAllSubsets(nums,arr,i+1,ans);
        }
    
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> arr;
            getAllSubsets(nums,arr,0,ans);
            return ans;
        }
};