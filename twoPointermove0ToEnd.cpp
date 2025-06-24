#include "iostream"
#include "vector"
using namespace std;
void moveToEnd(vector<int> arr)
{

    // while(l<r){
    int l = 0;
    int r = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[l] != 0)
        {
            l++;
        }
        else
        {
            swap(arr[l], arr[r]);
            r--;
        }
    }

    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << " ";
    }
}

int main()
{
    vector<int> arr = {0, 1, 0, 4, 5, 0, 7};
    moveToEnd(arr);
    return 0;
}