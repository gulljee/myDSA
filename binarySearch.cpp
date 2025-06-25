#include "iostream"
#include "vector"
using namespace std;

int binarySearch(vector<int> arr, int target)
{

    int left = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target < arr[mid])
        {
            right = mid - 1;
        }
        else if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int index = binarySearch(nums, 7);
    if (index != -1)
        cout << "Found at index: " << index << endl;
    else
        cout << "Not found" << endl;
}
