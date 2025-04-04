//! Leetcode - 1 :- Two Sums

//* Method - 1
//? TC - O(N)
//? SC - O(N)

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> mp;
            for(int i=0;i<nums.size();i++)
            {
                int remaining = target - nums[i];
    
                if(mp.find(remaining) != mp.end()){
                    return {i,mp[remaining]};
                }
    
                mp[nums[i]] = i;
            }
            return {-1,-1};
        }
};

//* Method - 2
//? TC - O(N^2)
//? SC - O(1)

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for(int i=0;i<nums.size();i++)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[i]+nums[j] == target) return {i,j};
                }
            }
            return {-1,-1};
        }
};