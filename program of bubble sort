#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    vector<int>arr = {64,34,12,25,22,11,90};
    cout<<"Original array"<<endl;
    for(auto v:arr) {
        cout<<v<<" ";
    }
    cout<<endl;
    bubbleSort(arr);
    cout<<"Sorted array is:"<<endl;
    for(auto v:arr) {
        cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}
