#include<iostream>
#include<vector>
using namespace std;
void mergeArray(vector<int>&arr,int low,int mid,int high){
    int left = low;
    int right = high;
    vector<int>temp;

    while(left<=mid && right<=high) {
        if(arr[left]<=arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
         temp.push_back(arr[left]);
         left++;
    }
    while(right<=high){
         temp.push_back(arr[right]);
         right++;
    }
    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }

}
void MergeS(vector<int>&arr,int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        MergeS(arr,low,mid);
        MergeS(arr,mid+1,high);
        mergeArray(arr,low,mid,high);
    }

}

int main(){
    vector<int>arr = {4,3,5,7,1};
    cout<<"Original array is"<<endl;
    for(auto v:arr) {
        cout<<v<<" ";
    }
    cout<<endl;
    MergeS(arr,0,arr.size()-1);
    cout<<"Sorted array is: "<<endl;
    for(auto v:arr){
        cout<<v<<" ";
    }
    cout << endl;
}

