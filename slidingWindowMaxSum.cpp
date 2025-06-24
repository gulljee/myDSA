#include "iostream"
#include "vector"
using namespace std;

int maximumSum(vector<int> nums, int k)
{
    int windowSum = 0;

    for (int i = 0; i < k; i++)
    {
        windowSum += nums[i];
    }
    int maxSum = windowSum;
    for (int i = k; i < nums.size(); i++)
    {
        windowSum += nums[i] - nums[i - k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main()
{
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;

    int result = maximumSum(nums, k);
    cout << "Maximum sum of subarray of size " << k << " is: " << result << endl;

    return 0;
}
