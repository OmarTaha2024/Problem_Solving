/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :    	2206. Divide Array Into Equal Pairs
@author : Omar Mohamed El Sayed Taha
@Link :https://leetcode.com/problems/divide-array-into-equal-pairs/description/

__________________________________________________________________________________________________________________
------------------------------------------------------------------------------------------------------------------
**/




class Solution {
public:
    bool divideArray(vector<int>& nums) {
            unordered_map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
    }

    for (auto& entry : freq) {
        if (entry.second % 2 != 0) {
            return false;
        }
    }

    return true;
    }
};
