#include "iostream"
#include "vector"
#include "unordered_map"
using namespace std;

unordered_map<int, int> freqMap(vector<int> nums)
{
    unordered_map<int, int> freq;

    for (int n : nums)
    {
        freq[n]++;
    }

    return freq;
}

int main()
{
    unordered_map<int, int> ans;
    vector<int> arr = {1, 2, 2, 3, 1, 4, 2, 3};

    ans = freqMap(arr);

    for(auto& pair : ans){
        cout << pair.first << " " << pair.second <<endl;
    }
}