#include<iostream>
#include<vector>
using namespace std;

selectionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0;i<n-1;i++) {
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    vector<int>arr = {64,25,12,22,11};
    cout<<"Original array is: "<<endl;
    for(auto v:arr) {
        cout<<v<<" ";
    }
    cout << endl;
    selectionSort(arr);
    cout<<"Sorted array is: "<<endl;
    for(auto v:arr) {
        cout<<v<<" ";
    }
}

