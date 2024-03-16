#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        int votes = 0;
        int x;
        for(int i = 0; i < len; i++){
            if(votes == 0){
                x = nums[i];
                votes++;
            }
            else if(nums[i] == x){
                votes++;
            }
            else{
                votes--;
                }
            }
        return x;
    }
};
// @lc code=end

