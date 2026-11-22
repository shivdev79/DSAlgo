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
        ListNode* temp = head;
        stack <int> st;
        while( temp != NULL){
            st.push(temp -> val);
            temp = temp -> next;
        }
        ListNode* temp1 = head;
        while(temp1!= NULL){
            int d1 = st.top();
            st.pop();
            if( d1 != temp1 -> val){
                return false;
            }
            temp1 = temp1 -> next;
        }
        return true;

    }
};