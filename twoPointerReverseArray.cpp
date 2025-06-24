#include "iostream"
#include "vector"
using namespace std;

void reverse(vector<int> arr){

    int l = 0;
    int r = arr.size() - 1;

    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }

    for(int el : arr ){
        cout<<el<<" ";
    }
    
}

int main(){

    vector<int> arr = {1,2,3,4};
    reverse(arr);


    return 0;
}