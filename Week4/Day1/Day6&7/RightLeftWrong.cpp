//https://codeforces.com/problemset/problem/2000/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n;
       cin>>n;
       int arr[n];
       for (int i = 0; i <n; i++)
       {
           cin>>arr[i];
       }

       string s;
       cin>>s;

       vector<int>left;
       vector<int>right;

       for (int i = 0; i <n; i++)
       {
            if(s[i]=='L'){
                left.push_back(i);
            }
            else{
                right.push_back(i);
            }
       }


       sort(left.begin(),left.end());
       sort(right.begin(),right.end());

        ll pre[n];
        pre[0] = arr[0];
       for (int i = 1; i <n; i++)
       {
           pre[i] = pre[i-1]+arr[i];
       }
       

       int l = 0;
       int r =  right.size()-1;

       ll ans = 0;

       int sz = left.size();

       while (r>=0 && l<sz)
       {
            int leftIndex = left[l];
            int rightIndex = right[r];

            if(leftIndex<=rightIndex){
                     ans+=pre[rightIndex];

                  if(leftIndex-1>=0){
                    ans-=pre[leftIndex-1];
                 }
            }
            else{
               break;
            }
            r--;
            l++;
           
       }
       
    cout<<ans<<"\n";

       
       
   }
   

return 0;

}
