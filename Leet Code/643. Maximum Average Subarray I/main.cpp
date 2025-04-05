/**                         Documentation section
_________________________________________________________________________________________________________________
-----------------------------------------------------------------------------------------------------------------
@name :    	Maximum Average Subarray I
@author : Omar Mohamed El Sayed Taha
@Link : https://leetcode.com/problems/maximum-average-subarray-i/description/


__________________________________________________________________________________________________________________
------------------------------------------------------------------------------------------------------------------
**/


#include <bits/stdc++.h>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    double maxSum = 0, currentSum = 0;

    for (int i = 0; i < k; i++) {
        currentSum += nums[i];
    }
    maxSum = currentSum;

    for (int i = k; i < nums.size(); i++) {
        currentSum += nums[i] - nums[i - k];
        maxSum = max(maxSum, currentSum);
    }

    return maxSum / k;
}


