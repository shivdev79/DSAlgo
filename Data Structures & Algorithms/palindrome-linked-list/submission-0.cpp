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
    bool isPalindrome(ListNode* head) {
        vector <int> store;
        ListNode* temp = head;
        while( temp != NULL){
            store.push_back(temp -> val);
            temp = temp -> next;
        }
        int n = store.size();
        int left = 0;
        int right = n - 1;
        while(left <= right){
            if(store[left] != store[right]){
                return false;
            }
            left = left + 1;
            right = right - 1;
        }
        return true;
    }
};