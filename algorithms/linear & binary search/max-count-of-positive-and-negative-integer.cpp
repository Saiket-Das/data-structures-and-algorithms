/*
  Maximum Count of Positive Integer and Negative Integer
  Problem Link: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
*/

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0, pos = 0;

        for (int i = 0; i < nums.size(); i++) {     // Time Complexity - O(N)
            if (nums[i] < 0) {
                neg++;
            }
            else if (nums[i] > 0) {
                pos++;
            }
        }

        if (neg > pos) return neg;
        else           return pos;
        return neg;
    }
};