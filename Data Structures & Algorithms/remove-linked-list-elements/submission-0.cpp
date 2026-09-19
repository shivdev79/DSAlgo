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
    ListNode* removeElements(ListNode* head, int val) {
        vector <int> ans;
        ListNode* temp1 = head;
        while(temp1 != NULL){
            ans.push_back(temp1 -> val);
            temp1 = temp1 -> next;
        }
        vector <int> final;
        for(int i = 0 ; i < ans.size() ; i++){
            if(ans[i] == val){
                continue;
            }
            final.push_back(ans[i]);
        }
        if(final.size() == 0){
            return NULL;
        }
        ListNode* n1 = new ListNode(final[0]);
        ListNode* move = n1;
        for(int i = 1 ; i< final.size() ; i++){
            ListNode* new1 = new ListNode(final[i]);
            move -> next = new1;
            move = new1;
        }
        return n1;
    }
};



