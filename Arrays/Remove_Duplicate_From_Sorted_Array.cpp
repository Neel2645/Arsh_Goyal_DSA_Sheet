//! Leetcode - 26 - Remove Duplicates from Sorted Array

//* Method - 1
//? TC - O(N logn)
//? SC - O(N)

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            set<int> s;
            for(int &ele : nums)
            {
                s.insert(ele);
            }
            int i = 0;
            for(auto it : s)
            {
                nums[i++] = it;
            }
            return s.size();
        }
};

//* Method - 2
//? TC - O(N)
//? SC - O(N)

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            vector<int> ans;
            ans.push_back(nums[0]);
            int i = 1;
    
            for(int &ele : nums)
            {
                if(ele != ans[i-1])
                {
                    ans.push_back(ele);
                    i++;
                }
            }
            nums = ans;
            return i;
        }
};


//* Method - 3
//? TC - O(N)
//? SC - O(1)

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i = 0;
            int j = 1;
    
            while(j < nums.size())
            {
                if(nums[i] != nums[j])
                {
                    nums[++i] = nums[j];
                }
                j++;
            }
            return i+1;
        }
};