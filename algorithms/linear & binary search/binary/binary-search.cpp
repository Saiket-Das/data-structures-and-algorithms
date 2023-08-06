/*
  Binary Search
  Problem Link: https://leetcode.com/problems/binary-search/
*/

// MEX

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0, right = nums.size() - 1, mid = (right + left) / 2;

        while (left <= right) {     // Time Complexity -> O(logN)
            // If target value is available then return the index of target value
            if (nums[mid] == target) return mid;    
            // If target value is less then mid index value then update the Right index value
            else if (target < nums[mid]) { 
                right = mid - 1;
            }
            // If target value is more then mid index value then update the Left index value
            else {
                left = mid + 1;
            }
            // Calculate new mid index value
            mid = (right + left) / 2;
        }

        return -1;
    }
};
