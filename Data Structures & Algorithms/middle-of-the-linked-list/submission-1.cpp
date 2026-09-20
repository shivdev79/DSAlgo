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
    ListNode* middleNode(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp -> next;
            cnt = cnt + 1;
        }
        int r = cnt/2;
        temp = head;
        while(r --){
            temp = temp -> next;
        }
        ListNode* next = temp;
        return next;

    }
};