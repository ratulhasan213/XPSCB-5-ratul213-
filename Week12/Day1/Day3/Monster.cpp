//https://codeforces.com/problemset/problem/1849/B
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int>b){
    if(a.first == b.first){
        return a.second<b.second;
    }

    return a.first > b.first;
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n,k;
      cin>>n>>k;
      
      int val;
      vector<pair<int,int>>v;
      vector<int>ans;
      for (int i = 1; i <=n; i++)
      {
        cin>>val;
        if(val%k==0){
            ans.push_back(i);
        }
        else{
            v.push_back({val%k,i});
        }

      }


      sort(v.begin(),v.end(),cmp);
      for(auto x: v){
        ans.push_back(x.second);
      }

      for(int x: ans){
        cout<<x<<" ";
      }

    cout<<"\n";
      
      
      
   }
   

return 0;

}

/*


1
3 2
1 2 3


3
3 2
1 2 3
2 3
1 1
4 3
2 8 3 5





// brute force got me TLE:
#include<bits/stdc++.h>
using namespace std;

class cmp{
 public:
 bool operator()(pair<int,int>a, pair<int,int>b){
     
     if(a.first == b.first){
        return a.second>b.second;
     }
     return a.first<b.first;
     
 }

};


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n,k;
      cin>>n>>k;
      priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
      int val;
      for (int i = 1; i <=n; i++)
      {
          cin>>val;
          pq.push({val,i});
      }

      vector<int>ans;

      while (!pq.empty())
      {
         auto p = pq.top();
         pq.pop();
         int temp = p.first-k;
         if(p.first>0){
             pq.push({temp,p.second});
         }
         else{
            ans.push_back(p.second);
         }
      }

      for(int x:ans){
        cout<<x<<" ";
      }
      cout<<"\n";
      
   }
   

return 0;

}


*/