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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        //  unordered_map<ListNode*,int> mp;

        //  ListNode *temp1 = headA;
        //  ListNode *temp2 = headB;

        //  while(temp1){
               
        //        mp[temp1] = temp1->val;
        //        temp1 = temp1->next;
        //  }

        //  while(temp2){
               
        //        if(mp.find(temp2) != mp.end()){
        //             return temp2;
        //        }

        //        temp2 = temp2->next;
        //  }

        //  return nullptr;

        ListNode *A = headA;
        ListNode *B = headB;
        while(A != B){
             
             A = (A!=nullptr)? A->next: headB;
             B = (B!=nullptr)? B->next: headA;

        }
        return B;

        

    }
};