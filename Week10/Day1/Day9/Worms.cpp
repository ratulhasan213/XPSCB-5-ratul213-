//https://codeforces.com/contest/474/problem/B
#include<bits/stdc++.h>
using namespace std;

void makeThePair(int arr[], int n, vector<pair<int,int>>& ans){


    for (int i = 0; i <n; i++)
    {
        int val = arr[i];
        if(i==0){
            //first:
            ans.push_back({1,arr[i]});
        }
        else
        {
            int f = ans.back().second+1;
            int s = ans.back().second+arr[i];
            ans.push_back({f,s});
        }
    }
    

}


int ApplyBinarySearch(vector<pair<int,int>>& arr,int n, int target){

    int start = 0;
    int end = n-1;


    while (start<=end)
    {
        int mid = start+(end-start)/2;

        auto p = arr[mid];

        if(target>=p.first && target<=p.second){
             return mid;
        }
        else if(target>p.second){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

 int n,q;
 cin>>n;
 int arr[n];

 for (int i = 0; i <n; i++)
 {
    cin>>arr[i];
 }
 
  cin>>q;
  int qrr[q];

 for (int i = 0; i <q; i++)
 {
    cin>>qrr[i];
 }
 


   vector<pair<int,int>>v;
   makeThePair(arr,n,v);

//   for(auto x: v){
//     cout<<x.first<<" "<<x.second<<"\n";
//   }


 for (int i = 0; i <q; i++)
 {
    cout<<ApplyBinarySearch(v,n,qrr[i])+1<<"\n";
 }
 

return 0;

}

/*

5
2 7 3 4 9
3
1 25 11


*/