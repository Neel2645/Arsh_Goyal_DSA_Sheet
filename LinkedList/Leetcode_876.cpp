//! Leetcode - 876 :- Middle of the Linked List

//* Method - 1
//? TC - O(N)
//? SC - O(1)

class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            int len = 0;
            ListNode* temp = head;
    
            while(temp){
                len++;
                temp = temp->next;
            }
    
            int step = len / 2;
            temp = head;
            while(step--)
            {
                temp = temp->next;
            }
            return temp;
    
        }
};

//* Method - 2
//? TC - O(N)
//? SC - O(1)
//! Tortoise & Hare Algorithm

class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            ListNode* slow = head;
            ListNode* fast = head;
    
            while(fast && fast->next)
            {
                slow = slow->next;
                fast = fast->next->next;
            }
    
            return slow;
        }
};


//* Method - 3
//? TC - O(N)
//? SC - O(N)

// use the stack and move all the node into the stack one by one .
// if size is odd then remove ( size/2 ) node and return top of the node.
// if size is even then remove (size/2 - 1 ) node and return top of the stack.