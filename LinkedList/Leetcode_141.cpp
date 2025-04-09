//! Leetcode - 206 :- Reverse Linked List

//* Method - 1
//? TC - O(N)
//? SC - O(N)

class Solution {
    public:
        bool hasCycle(ListNode *head) {
            unordered_map<ListNode*,int> mp;
            ListNode* temp = head;
    
            while(temp)
            {
                if(mp.find(temp) != mp.end()) return true;
    
                mp[temp] = 1;
                
                temp = temp->next;
            }
    
            return false;;
        }
};

//* Method - 2
//? TC - O(N)
//? SC - O(1)
//! Tortoise and Hare Algorithm

class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode* slow = head;
            ListNode* fast = head;
    
            while(fast and fast->next)
            {
                slow = slow->next;
                fast = fast->next->next;
    
                if(slow == fast) return true;
            }
    
            return false;
        }
};