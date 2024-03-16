#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int p = nums1.size() - 1;
        while(i >= 0 && j >= 0){
            if(nums1[i] >= nums2[j]){
                nums1[p] = nums1[i];
                i--;
            }else{
                nums1[p] = nums2[j];
                j--;
            }
            p--;
        }
        while(j >= 0){
            nums1[p--] = nums2[j--];
        }
    }
};
// @lc code=end

