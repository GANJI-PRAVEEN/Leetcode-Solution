/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* point=head;
        if(!point)return head;
        ListNode* cur=head->next;
        if(!cur)return head;
        while(point and cur){
            while(cur and point and cur->val == point->val){
                cur=cur->next;
            }
            point->next = cur;
            point = cur;
            if(point)cur = point->next;
        }
        return head;
    }
};