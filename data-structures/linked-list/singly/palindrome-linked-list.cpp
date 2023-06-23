/*
  Palindrome Linked List
  Problem Link: https://leetcode.com/problems/palindrome-linked-list/
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

    void inser_at_tail (ListNode* &head, ListNode* &tail, int val) {
        ListNode* newNode = new ListNode(val);
        
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    void reverse_new_list (ListNode *&newHead, ListNode *curr) {
        if (curr->next == NULL) {
            newHead = curr;
            return;
        }
        reverse_new_list (newHead, curr->next);
        curr->next->next = curr;
        curr->next = NULL;
    }

    bool isPalindrome(ListNode* head) {

        ListNode* newHead = NULL;;                            // Create a New list to copy Main list's value                      
        ListNode* newTail = NULL;

        ListNode* temp = head;
        while (temp != NULL) {
            inser_at_tail(newHead, newTail, temp->val);       // Copy Main list's value to New list's tail one by one 
            temp = temp->next;
        }

        reverse_new_list(newHead, newHead);;                  // Reverse the New list 
   
        temp = head;   
   
        while (temp != NULL) {                                // Compare Main & New list
            if (newHead->val != temp->val) {                  // If theirs values are not same the Main list is not Palindrome (return false)
                return false;
            }
            temp = temp->next;
            newHead = newHead->next;
        }
        return true;
    }
};