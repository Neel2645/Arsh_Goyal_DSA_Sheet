//! Leetcode - 242 :- Valid Anagram

//* Method - 1
//? TC - O(N logn)
//? SC - O(1)

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
            return true;

        return false;
    }
};

//* Method - 2
//? TC - O(N)
//? SC - O(1)

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int m = s.size();
        int n = t.size();
        if (m != n)
            return false;

        vector<int> arr(26, 0);
        for (int i = 0; i < m; i++)
        {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
                return false;
        }
        return true;
    }
};

//* Method - 3
//? TC - O(N)
//? SC - O(N)

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> mp;

        for (auto &ch : s)
            mp[ch]++;
        for (auto &ch : t)
        {
            mp[ch]--;
            if (mp[ch] == 0)
                mp.erase(ch);
        }

        return mp.size() == 0 ? true : false;
    }
};