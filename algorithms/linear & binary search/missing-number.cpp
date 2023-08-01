/*
  Missing Number
  Problem Link: https://leetcode.com/problems/missing-number/
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());     // Time Complexity - O(NlogN)

        int i = 0;
        while (i < nums.size()) {     // Time Complexity - O(N)
            if (i != nums[i]) break;
            i++;
        }
        return i;
    }
};