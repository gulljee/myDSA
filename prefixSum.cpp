#include "iostream"
#include "vector"
using namespace std;


int main(){

    vector<int> arr = {2,4,1,3,5};
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];

    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    int r=3;
    int l=1;
    int rangeSum = prefix[r] - (l>0 ? prefix[l-1]:0);
    cout << rangeSum;
    return 0;

}