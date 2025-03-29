/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :    	Minimum Index of a Valid Split
@author : Omar Mohamed El Sayed Taha
@Link : https://leetcode.com/problems/minimum-index-of-a-valid-split/description/


__________________________________________________________________________________________________________________
------------------------------------------------------------------------------------------------------------------
**/


class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> freq;
    int n = nums.size();


    for (int num : nums) freq[num]++;

    int dominant = -1, total_count = 0;
    for (auto [num, counter] : freq) {
        if (counter * 2 > n) {
            dominant = num;
            total_count = counter;
            break;
        }
    }

    if (dominant == -1) return -1;

    int left_count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == dominant) left_count++;

        int left_size = i + 1;
        int right_size = n - left_size;
        int right_count = total_count - left_count;


        if (left_count * 2 > left_size && right_count * 2 > right_size) return i;
    }

    return -1;
    }
};
