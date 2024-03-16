#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int slow = 0;
        int fast = 0;
        while(fast < len){
            if(nums[fast] != val){
                nums[slow] = nums[fast];
                slow++;
        }
        fast++;
        }
        return slow;
    }
};
// @lc code=end

