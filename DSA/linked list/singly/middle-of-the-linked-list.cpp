/*
  Middle of the Linked List
  Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/
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

    int size_of_list (ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Brute force solution 
    ListNode* middleNode(ListNode* head) {        // Time complexity -> O(N)
        int len = size_of_list(head);
        ListNode* temp = head;
        for (int i = 0; i < len/2; i++) {
            temp = temp->next;
        }
        return temp;
    }

    // Using Haze and Tortoise Algorithm
    ListNode* middleNode(ListNode* head) {        // Time complexity -> O(N)         
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};