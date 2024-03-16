#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int fast = 0;
        int slow = 0;
        int cnt = 0;
        while(fast < len){
            if(nums[fast] != nums[slow]){
                slow++;
                nums[slow] = nums[fast];
            }
            else if(slow < fast && cnt < 2){
                slow++;
                nums[slow] = nums[fast];
            }
            fast++;
            cnt++;
            if(fast < nums.size() && nums[fast] != nums[fast-1]){
                cnt = 0;
            }
        }
        return slow + 1;
    }
};
// @lc code=end

