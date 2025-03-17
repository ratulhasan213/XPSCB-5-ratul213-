#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n;



void makeSum(int arr[], vector<int>& temp, vector<vector<int>>& ans, int sum, int indx, int target){
  
    if(indx == n || sum > target){
        return;
    }

    if(sum == target){
        ans.push_back(temp);
        return;
    }

    //take:
    temp.push_back(arr[indx]);
    sum+=arr[indx];
    makeSum(arr,temp,ans,sum,indx,target);

    temp.pop_back();  // backtrack
    sum-=arr[indx];
    
    //notake:
    makeSum(arr,temp,ans,sum,indx+1,target);
    
}


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int arr[] = {2,3,6,7};
   int target = 7;
   n = sizeof(arr)/sizeof(arr[0]);

   vector<int>temp;
   vector<vector<int>>ans;

   makeSum(arr,temp,ans,0,0,target);

   for(auto arr: ans){
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<"\n";
   }


return 0;

}