//https://codeforces.com/problemset/problem/1843/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
        int n;
        cin>>n;
        ll ans = 0;
        ll arr[n];
        int op = 0;
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];

            ans+=abs(arr[i]);
        }

         
        bool negStart = false;
        for (int i = 0; i <n; i++)
        {
             if(arr[i]<0){

                if(negStart == false){
                    op++;
                    negStart = true;
                }
               
             }
             if(arr[i]>0){
                if(negStart){
                    negStart = false;
                }
             }   
        }
        
        cout<<ans<<" "<<op<<"\n";
        
   }
   

return 0;

}

