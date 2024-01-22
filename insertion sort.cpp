#include<iostream>
#include<vector>
using namespace std;
InsertionSort(vector<int>& arr)
{
    int n = arr.size();
    for(int i=0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main(){
    vector<int>arr = {4,3,5,7,1};
    cout<<"Original array is"<<endl;
    for(auto v:arr) {
        cout<<v<<" ";
    }
    cout<<endl;
    InsertionSort(arr);
    cout<<"Sorted array is: "<<endl;
    for(auto v:arr){
        cout<<v<<" ";
    }
    cout << endl;
}
