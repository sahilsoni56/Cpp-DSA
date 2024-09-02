#include <iostream>
#include <vector>
using namespace std;


void print(vector<int>& arr,int n){
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

vector<int> bubble_sort(vector<int>& a, int n){
    for(int i =0 ; i<n-1;i++){
        for(int j =0 ; j<=n-1-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    return a;
}

int main()
{
    vector<int> numbers = {5,4,3,2,1,55,66,12,54,3,87,4,3,97};
    int n  = numbers.size();
    bubble_sort(numbers,n);
    print(numbers,n);
    return 0;

}