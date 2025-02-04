//https://codeforces.com/problemset/problem/1881/D
#include<bits/stdc++.h>
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
     int val;
     map<int,int>cnt;
     for (int i = 0; i <n; i++)
     {
        cin>>val;
        
        for (int j = 2; j*j<=val; j++)
        {
            while (val%j==0)
            {
                cnt[j]++;
                val/=j;
            }
            
        }

        if(val!=1){
            cnt[val]++;
        }
        
     }


   //   for(auto[k,v]:cnt){
   //    cout<<k<<"->"<<v<<"\n";
   //   }


       bool ans = true;
     

     for(auto[key,occ]: cnt){
         if(occ%n!=0){
            ans = false;
            break;
         }
     }
     

     if(ans){
          cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }


     
  }
  
   

return 0;

}



/*



7
5
100 2 50 10 1
3
1 1 1
4
8 2 4 2
4
30 50 27 20
2
75 40
2
4 4
3
2 3 1



*/