#include <iostream>
#include <vector>
using namespace std;


int  subsetXORSum(const vector<int>& nums)
{
    if (nums.empty()) return 0;
    int allOR = 0;
    for (int x : nums)
    {
        allOR |= x;

    }
int result =  allOR << ((nums.size()) - 1);

    return result;
}

int main()
{

    int x ;
    vector<int> nums;
    for (int i = 0; i < 2; ++i)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << subsetXORSum(nums) << "\n";
    return 0;
}
