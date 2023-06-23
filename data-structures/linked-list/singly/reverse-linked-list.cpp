/*
  Reverse Linked List
  Problem Link: https://leetcode.com/problems/reverse-linked-list/
*/

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

    void reverse_list (ListNode* &head, ListNode* curr) {        // Time complexity -> O(N)
        if (curr->next == NULL) {
            head = curr;
            return; 
        }

        reverse_list(head, curr->next);
        curr->next->next = curr;
        curr->next = NULL;
    }

    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return head;
        
        reverse_list(head, head);
        return head;
    }
};