//! Leetcode - 90 :- Subsets II

//* Method - 1
//? TC - O(N * (2^n) * (n*logn))
//? SC - O(N * (2^n))

class Solution {
    public:
    
        void getAllSubsets(vector<int>& nums , vector<int>& arr , int i ,
            vector<vector<int>>& ans)
        {
            if(i >= nums.size())
            {
                ans.push_back(arr);
                return;
            }
    
            //include
            arr.push_back(nums[i]);
            getAllSubsets(nums,arr,i+1,ans);
    
            //Backtrack
            arr.pop_back();
    
            //exclude
            int idx = i+1;
            while(idx<nums.size() && nums[idx]==nums[idx-1]) idx++;
    
            getAllSubsets(nums,arr,idx,ans);
        }
    
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            vector<vector<int>> ans;
            vector<int> arr;
            getAllSubsets(nums,arr,0,ans);
            return ans;
        }
};