#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

vector<vector<int>> threeSum(vector<int> nums)
{

    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    int i = 0;
    int n = nums.size();
    for (i = 0; i < n - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            int total = nums[i] + nums[l] + nums[r];

            if (total == 0)
            {
                result.push_back({nums[i], nums[l], nums[r]});

                while (l < r && nums[l] == nums[l + 1])
                    l++;
                while (l < r && nums[r] == nums[r - 1])
                    r--;
                l++;
                r--;
            }
            else if (total < 0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);

    for (auto triplet : res)
    {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++)
        {
            cout << triplet[i];
            if (i < triplet.size() - 1)
                cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}