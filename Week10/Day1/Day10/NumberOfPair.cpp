//https://codeforces.com/problemset/problem/1538/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int LowerBound(ll arr[], int start,int end, int left, int right){
    int ans = -1;
    
   
   while (start<=end)
   {
        int mid = start+(end-start)/2;

        if(arr[mid]>=left && arr[mid]<=right){
              ans = mid;
              end = mid-1;
        }
        else if(arr[mid]<left){
           start = mid+1;
        }
        else {
            //arr[mid]>right
            end = mid-1;

        }
   }
   
    return ans;
}


int UpperBound(ll arr[], int start,int end, int left, int right){
    int ans = -1;
    
   
   while (start<=end)
   {
        int mid = start+(end-start)/2;

        if(arr[mid]>=left && arr[mid]<=right){
              ans = mid;
            //   end = mid-1;
            start = mid+1;
        }
        else if(arr[mid]<left){
           start = mid+1;
        }
        else {
            //arr[mid]>right
            end = mid-1;

        }
   }
   

    return ans;
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 
  
   int test;
   cin>>test;

   while (test--)
   {
   
   int n,l,r;
   cin>>n>>l>>r;
   ll arr[n];
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }
   
   sort(arr,arr+n);
  
    
    ll ans = 0;
    for (int i = 0; i <n; i++)
    {
        int start = i+1;
        int end = n-1;
        int left = l -arr[i];
        int right = r - arr[i]; 
        int LB = LowerBound(arr,start,end,left,right);
        int UB = UpperBound(arr,start,end,left,right);


        if(LB!=-1 && UB!=-1) ans+=(UB-LB+1);

    }


    cout<<ans<<"\n";


   }
   

    
   

return 0;

}


/*


4
3 4 7
5 1 2
5 5 8
5 1 2 4 3
4 100 1000
1 1 1 1
5 9 13
2 5 5 1 1


*/