//https://codeforces.com/problemset/problem/1873/F
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
        ll k;
        cin>>n>>k;

        ll f[n];
        ll h[n];
        for (int i = 0; i <n; i++)
        {
            cin>>f[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin>>h[i];
        }
          

        vector<vector<pair<ll,ll>>>main;

        vector<pair<ll,ll>> v;

         v.push_back({f[0],h[0]});

        for (int i = 1; i < n; i++)
        {
             if(h[i-1]%h[i]==0){
                v.push_back({f[i],h[i]});
             }
             else{
                 
                 main.push_back(v);
                 v.clear();
                 v.push_back({f[i],h[i]});
             }
        }
              
            if(!v.empty()){
               main.push_back(v);
            }  
            
          
          ll ans = 0;
          ll end;
          ll start;
          ll sum;
       
        for(vector<pair<ll,ll>> arr: main){
       
           int len = arr.size();
           
           start = 0;
           end = 0;
           sum = 0;

           while (end<len)
           {
                sum+=arr[end].first;

                while (sum>k && start<=end)
                {
                     sum-=arr[start].first;
                     start++;
                }

                ans = max(ans,end-start+1);
                end++;
                
           }
           
           
         
        }

        cout<<ans<<"\n";
        
   }
   

return 0;

}

/*


1
5 12
3 2 4 1 8
4 4 2 4 1


5
5 12
3 2 4 1 8
4 4 2 4 1
4 8
5 4 1 2
6 2 3 1
3 12
7 9 10
2 2 4
1 10
11
1
7 10
2 6 3 1 5 10 6
72 24 24 12 4 4 2


*/