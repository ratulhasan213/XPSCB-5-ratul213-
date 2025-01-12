//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n,k;
int searchIndex(ll arr[], ll target){
  
 int ans = n+1;
 
 int start = 1;
 int end = n;

 while (start<=end)
 {
    int mid = start+(end-start)/2;
    if(arr[mid]>=target){

        ans = min(ans,mid);
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

 cin>>n>>k;
 ll arr[n+1], qr[k+1];

 for (int i = 1; i <=n; i++)
 {
    cin>>arr[i];
 }


 for (int i = 1; i <=k; i++)
 {
    cin>>qr[i];
 }


 for (int i = 1; i <=k; i++)
 {
    cout<<searchIndex(arr,qr[i])<<"\n";
 }
 

return 0;

}


/*

5 5
3 3 5 8 9
2 4 8 1 10


*/