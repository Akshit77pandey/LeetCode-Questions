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
        ListNode*temp=head;
        vector<int>result;
        int n=0;

        while(temp!=NULL){
            result.push_back(temp->val);
            temp=temp->next;
            n++;
        }
       for(int i=n-1;i>=0;i--){
        if(head->val!=result[i]){
            return false;
        }
        head=head->next;
       }
        return true;
    }
};