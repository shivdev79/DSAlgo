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
#include<algorithm>
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector <int> ans1;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while(temp1 != NULL){
            ans1.push_back(temp1 -> val);
            temp1 = temp1 -> next;
        }
        while(temp2 != NULL){
            ans1.push_back(temp2 -> val);
            temp2 = temp2 -> next;
        }
        if(ans1.empty()){
            return NULL;
        }
        sort(ans1.begin() , ans1.end());
        ListNode *new1 = new ListNode(ans1[0]);
        ListNode *current = new1;
        for(int i = 1 ; i < ans1.size() ; i++){
            current -> next = new ListNode(ans1[i]);
            current = current -> next;
        }
        return new1;
    }
};
