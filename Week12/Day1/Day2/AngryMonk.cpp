//https://codeforces.com/problemset/problem/1992/B
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
      ll sum,n;
      cin>>sum>>n;
      vector<ll>arr;
      ll ans = 0;
      ll val;
      for (int i = 0; i <n; i++)
      {
        cin>>val;
        if(val==1){
            ans++;
        }else{
            arr.push_back(val);
        }

      }



      if(arr.size()>1){
      sort(arr.begin(),arr.end(),greater<ll>());
      arr.erase(arr.begin());

    //   cout<<ans<<"\n";
    //   for(int x:arr){
    //     cout<<x<<" ";
    //   }

    //   cout<<"\n";

        while (!arr.empty())
       {
         ll temp = arr.back();
         arr.pop_back();
         ans+= (2*temp)-1;
       }

      }


      if(ans == n){
        cout<<ans-1<<"\n";
      }
      else{
         cout<<ans<<"\n";
      }

    

 
      
      
   }
   

return 0;

}



/*


1
5 4
2 1 1 1


4
5 3
3 1 1
5 2
3 2
11 4
2 3 1 5
16 6
1 6 1 1 1 6



*/