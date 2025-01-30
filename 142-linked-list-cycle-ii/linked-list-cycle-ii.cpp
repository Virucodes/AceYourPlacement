/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        // unordered_map<ListNode*,int> mp;
        // int i = 0;
        // while(head != nullptr){
        //     if(mp.find(head) != mp.end()){
        //         return head;
        //     }
        //     mp[head] = 0;
        //     head = head->next;
        // }

        // return nullptr;


        //Another approach to solve using the tortoise and hare


        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;

        while(fast && fast->next){
             
             slow = slow->next;
             fast = fast->next->next;
             if(fast == slow){
                 flag = true;
                 break;
             }
        }

        if(!flag){ return nullptr;}


        slow = head;


        while(slow != fast){
            slow = slow->next;
            fast = fast->next;

        }
        return slow;

    }
};