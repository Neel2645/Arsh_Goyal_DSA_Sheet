//! GFG :-  Function to find the length of a loop in the linked list

//* Method - 1
//? TC - O(N)
//? SC - O(N)

class Solution
{
public:
    int countNodesinLoop(Node *head)
    {
        unordered_map<Node *, int> mp;
        Node *temp = head;
        int cnt = 1;
        while (temp)
        {
            if (mp.find(temp) != mp.end())
            {
                return (cnt - mp[temp]);
            }

            mp[temp] = cnt;
            cnt++;
            temp = temp->next;
        }
        return 0;
    }
};

//* Method - 2
//? TC - O(N)
//? SC - O(1)

class Solution {
    public:
      int lengthOfCycle(Node* slow)
      {
          Node* fast = slow->next;
          int cnt = 1;
          while(slow != fast)
          {
              fast = fast->next;
              cnt++;
          }
          return cnt;
      }
      
      int countNodesinLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            {
                return lengthOfCycle(slow);
            }
        }
        return 0;
      }
};