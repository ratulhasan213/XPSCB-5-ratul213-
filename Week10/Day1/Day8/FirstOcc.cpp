#include<bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int>&arr, int target){

    int start = 0;
    int end = arr.size()-1;
    
    int ans = -1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid] == target){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>target){
             end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    return ans;
    
}

int lastOccurance(vector<int>&arr, int target){
     int start = 0;
    int end = arr.size()-1;
    
    int ans = -1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid] == target){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>target){
             end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    return ans;
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   vector<int> arr = {2,4,6,6,7,8,8,8,10,12};

    //    cout<<firstOccurance(arr,8)<<"\n";

    cout<<lastOccurance(arr,8)<<"\n";

return 0;

}