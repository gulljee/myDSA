#include <iostream>
#include <vector>
using namespace std;

void findSubsets(int index, int target, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {

    if(target==0){
        result.push_back(current);
        return;
    }

    if(target<0 || index>=nums.size()){
        return;
    }
    current.push_back(nums[index]);
    findSubsets(index+1,target-nums[index],nums,current,result);
    
    current.pop_back();
    findSubsets(index+1,target,nums,current,result);
    
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int target = 5;

    vector<vector<int>> result;
    vector<int> current;

    findSubsets(0, target, nums, current, result);

    cout << "Subsets that sum to " << target << ":\n";
    for (const auto& subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
