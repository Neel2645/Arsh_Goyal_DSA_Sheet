//! Leetcode - 2442 :- Count Number of Distinct Integers After Reverse Operations

//* Method - 1
//? TC - O(N)
//? SC - O(N)

class Solution
{
public:
    int reverse(int n)
    {
        int ans = 0;
        while (n)
        {
            int d = n % 10;
            ans = ans * 10 + d;
            n /= 10;
        }
        return ans;
    }

    int countDistinctIntegers(vector<int> &nums)
    {
        unordered_set<int> s;

        for (int &ele : nums)
        {
            s.insert(ele);
            s.insert(reverse(ele));
        }
        return s.size();
    }
};