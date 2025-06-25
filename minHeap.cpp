#include "iostream"
#include "vector"
using namespace std;

class Heap{

    vector<int> heap;

    void heapifyUp(int index){
        while(index>0){
           int parent = (index-1)/2;
           if(heap[parent] > heap[index]){
            swap(heap[index],heap[parent]);
            index = parent;
           } else break;
        }
    }

    void heapifyDown(int index){
        int left = 2*index + 1;
        int right = 2*index + 2;
        int smallest = index;
        
        if(left<heap.size() && heap[left]<heap[smallest]){
            smallest = left;
        }
        if(right<heap.size() && heap[right]<heap[smallest]){
            smallest = right;
        }

        if(smallest!=index){
            swap(heap[index],heap[smallest]);
            heapifyDown(smallest);
        }
    
    }




};