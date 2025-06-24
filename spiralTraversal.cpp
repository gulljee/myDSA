#include "iostream"
#include "vector"
using namespace std;

vector<int> spiralTraverse(vector<vector<int>> nums)
{
    vector<int> ans;
    int left = 0;
    int right = nums[0].size() - 1;
    int top = 0;
    int bottom = nums.size() - 1;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(nums[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(nums[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(nums[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(nums[i][left]);
            }
            left++;
        }
    }
return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = spiralTraverse(matrix);
    for (int val : result) cout << val << " ";
    return 0;
}