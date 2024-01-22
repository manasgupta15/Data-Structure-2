#include<iostream>
#include<vector>
using namespace std;
shellSort(vector<int> &arr){
    int n = arr.size();
    for(int gap = n/2;gap>0;gap = gap/2){
        for(int i = gap;i<n;i++){
            int temp = arr[i];
            int j;
            for(j = i;j>=gap && arr[j-gap]>temp;j-=gap){
                arr[j] = arr[j-gap];
            }
            arr[j] = temp;
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
    shellSort(arr);
    cout<<"Sorted array is: "<<endl;
    for(auto v:arr){
        cout<<v<<" ";
    }
    cout << endl;
}

