//! Leetcode - 2744 :- Find Maximum Number of String Pairs

//* Method - 1
//? TC - O(N^2)
//? SC - O(1)

class Solution {
    public:
        int maximumNumberOfStringPairs(vector<string>& s) {
            int cnt = 0;
            for(int i=0;i<s.size();i++)
            {
                for(int j=i+1;j<s.size();j++)
                {
                    reverse(s[j].begin(),s[j].end());
                    if(s[i]!= " " && s[j] == s[i]){
                        cnt++;
                        s[j] = " ";
                    }
                }
            }
            return cnt;
        }
};

//* Method - 2
//? TC - O(N)
//? SC - O(N)

class Solution {
    public:
        int maximumNumberOfStringPairs(vector<string>& words) {
            unordered_set<string> s;
            int cnt = 0;
            for (string& ele : words) {
                if (s.find(ele) != s.end()) cnt++;
                else {
                    s.insert(ele);
                    reverse(ele.begin(), ele.end());
                    s.insert(ele);
                }
            }
            return cnt;
        }
};