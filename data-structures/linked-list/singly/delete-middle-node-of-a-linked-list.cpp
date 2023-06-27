/*
  Delete middle node from a Singly Linked List
  Problem Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
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

    int size (ListNode* head) {
        int i = 0;

        ListNode* temp = head;
        while (temp != NULL) {
            i++;
            temp = temp->next;
        }
        return i;
    }

    void delete_middle_node (ListNode* head, int pos) {
        ListNode* temp = head;
        
        for (int i = 0; i < pos; i++) {
            if (i == pos-1) {
                ListNode* deleteNode = temp->next;
                if (temp->next != NULL) {
                    temp->next = temp->next->next;
                }
                else {
                    temp->next = NULL;
                }
                delete deleteNode;
            }
            temp = temp->next;
        }
    }

    ListNode* deleteMiddle(ListNode* head) {         // Time Complexity -> O(N)
        int len = size(head);                           

        if (size(head) == 1) {
            return NULL;
        }
        else {
            delete_middle_node(head, (size(head)/2));
        }
        return head;
    }
};