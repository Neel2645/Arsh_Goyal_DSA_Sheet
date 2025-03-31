//! Leetcode - 283 - Move Zeroes

//* Method - 1
//? TC - O(N)
//? SC - O(1)

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n=nums.size();
            int i=0;
            int j=0;
            while(j<n)
            {
                if(nums[j]!=0)
                {
                    swap(nums[i],nums[j]); 
                    i++;
                }
                 j++;
            }
        }
};


//* Method - 2
//? TC - O(N)
//? SC - O(N)

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n=nums.size();
            vector<int> res(n,0);
            int j=0;
            for(int i = 0; i<n; i++)
            {
                if(nums[i] != 0)
                {
                    res[j++]=nums[i];
                }
            }
            nums = res;
        }
};



//* Method - 3
//? TC - O(N)
//? SC - O(1)

class Solution {
    public:
            void moveZeroes(vector<int>& nums) {
                int i = 0;
                int j = 0;
                int n = nums.size();
                while(i<n && j<n)
                {
                    if(nums[j] == 0) j++;
                    else if(nums[i]!=0){
                        i++;
                        if(j<=i) j = i;
                    }
                    else {
                        swap(nums[i++],nums[j++]);
                    }
                }
            }
        };


//* Method - 4
//? TC - O(N)
//? SC - O(1)

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int l = 0;
            int m = 0;
            int h = nums.size()-1;
            
            while(m <= h)
            {
                if(nums[h] == 0) h--;
                else if(nums[m] != 0) {
                    swap(nums[l++],nums[m++]);
                }
                else m++;
            }
                    
        }
};