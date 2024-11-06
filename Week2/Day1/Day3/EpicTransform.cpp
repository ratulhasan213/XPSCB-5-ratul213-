//https://codeforces.com/problemset/problem/1506/D
#include<bits/stdc++.h>
using namespace std;

class cmp{

 public:   

bool operator()(pair<int,int>a,pair<int,int>b){
       
       return a.second<b.second;
}

};

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
         cnt[val]++;

      }

      priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;

      for(auto[key,val]:cnt){
        
        pq.push({key,val});
      }


      while (pq.size()>1)
      {
           auto f = pq.top();
           pq.pop();

           int f1 = f.first;
           int f2 = f.second;
           
           auto s = pq.top();
           pq.pop();
           
           int s1 = s.first;
           int s2 = s.second;

          f2--;
          s2--;

          if(f2!=0){
            pq.push({f1,f2});
          }

          if(s2!=0){
            pq.push({s1,s2});
          }


      }


      if(pq.size()==0){
        cout<<"0\n";
      }
      else{
        auto it = pq.top();
        cout<<it.second<<"\n";
      }
      
   }
   

return 0;

}