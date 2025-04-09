//! Leetcode - 206 :- Reverse Linked List

//* Method - 1
//? TC - O(N)
//? SC - O(N)

class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            stack<int> st;
            ListNode* temp = head;
    
            while(temp){
                st.push(temp->val);
                temp = temp->next;
            }
    
            temp = head;
    
            while(st.size() > 0){
                temp->val = st.top();
                st.pop();
                temp = temp->next;
            }
            
            return head;
        }
};

//* Method - 2
//? TC - O(N)
//? SC - O(N)

class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            if(head==NULL or head->next==NULL) return head;
    
            ListNode* newNode = reverseList(head->next);
            head->next->next = head;
            head->next = NULL;
            return newNode;
        }
};

//* Method - 3
//? TC - O(N)
//? SC - O(1)

class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            if(head==NULL or head->next==NULL) return head;
    
            ListNode* curr = head;
            ListNode* prev = NULL;
    
            while(curr)
            {
                ListNode* nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
            }
            return prev;
        }
};