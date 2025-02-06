//https://codeforces.com/problemset/problem/26/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 
   
   int num;
   cin>>num;
    int ans = 0;
   for (int j = 2; j <=num; j++)
   {
       int n = j;
       map<int,int>cnt;
   for (int i = 2; i*i <=n; i++)
   {
       while(n%i==0){
          cnt[i]++;
          n/=i;
       }
   }


   if(n!=1){
    cnt[n]++;
   }

//    for(auto[key,occ]: cnt){
//     cout<<key<<" "<<occ<<"\n";
//    }


   if(cnt.size()==2){
     ans++;
    //  cout<<j<<"\n";
   }

   }

   cout<<ans<<"\n";
   

return 0;

}//https://codeforces.com/problemset/problem/26/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 
   
   int num;
   cin>>num;
    int ans = 0;
   for (int j = 2; j <=num; j++)
   {
       int n = j;
       map<int,int>cnt;
   for (int i = 2; i*i <=n; i++)
   {
       while(n%i==0){
          cnt[i]++;
          n/=i;
       }
   }


   if(n!=1){
    cnt[n]++;
   }

//    for(auto[key,occ]: cnt){
//     cout<<key<<" "<<occ<<"\n";
//    }


   if(cnt.size()==2){
     ans++;
    //  cout<<j<<"\n";
   }

   }

   cout<<ans<<"\n";
   

return 0;

}