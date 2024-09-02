# include <iostream>
#include <vector>
using namespace std;


vector<int> MinIndex(vector<int>& array,int n ) {
    for(int i =0 ; i<n-1;i++){
        int minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if (array[j] < array[minindex])
                minindex = j;
        }
        swap(array[i],array[minindex]);
    }
    return array;
}

int main(){
    vector<int> arr = {44,33,22,11,55,2,6,99};
    int n = arr.size();
    MinIndex(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}