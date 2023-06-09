/*
  Two Sum
  Problem Link: class Solution { public: vector<int> twoSum(vector<int>& nums, int target) { } };
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {    

        vector<int> index;
        
        for (int i = 0; i < nums.size(); i++) {            // Brute force solutionn (Time Complexity -> O(N^2))
            for (int j = i+1; j < nums.size(); j++) {
                if ((nums[i] + nums[j]) == target) {
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }
        }

        return index;
    }
}
