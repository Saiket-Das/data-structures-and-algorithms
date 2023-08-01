/*
  Find Target Indices After Sorting Array
  Problem Link: https://leetcode.com/problems/find-target-indices-after-sorting-array/
*/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());     // Time Complexity O(NlogN)

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {     // Time Complexity O(N)
            if (nums[i] == target) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};