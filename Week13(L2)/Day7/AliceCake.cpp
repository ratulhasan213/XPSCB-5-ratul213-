//https://codeforces.com/problemset/problem/1654/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


bool canMake(map<ll,int>& cnt, priority_queue<ll>& pq, int total){
    // cout<<cnt.size()<<"\n";
    if(cnt.size()==0){
        return true;
    }

    ll num = pq.top();
    pq.pop();
    ll a,b;
    if(num%2==0){
        a = num/2;
        b = a;
    }
    else{
        a = num/2;
        b = a+1;
    }

    // cout<<a<<" "<<b<<"\n";

    if(cnt.count(a)){
         cnt[a]--;
         if(cnt[a]==0){
            cnt.erase(a);
         }
         total--;
    }
    else{
        pq.push(a);
    }

    if(cnt.count(b)){
        cnt[b]--;
        total--;
        if(cnt[b]==0){
            cnt.erase(b);
        }
    }
    else{
        pq.push(b);
    }

    if(total<pq.size()){
        return false;
    }
   
    return canMake(cnt,pq,total);

}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n;
      cin>>n;
      vector<ll>arr(n);
      ll sum = 0;
      map<ll,int>cnt;
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
        sum+=arr[i];
        cnt[arr[i]]++;
      }
      
      
      int totalCount = n;
      priority_queue<ll>pq;
      pq.push(sum);
    //   cout<<pq.top()<<"\n";

      bool ans;
      if(n==1){
        ans = true;
      }
      else{
        ans = canMake(cnt,pq,totalCount);
      }


      ans == true ? cout<<"YES\n" : cout<<"NO\n";
       
      
   }
   

return 0;

}


/*


1
8
2 16 1 8 64 1 4 32



14
1
327
2
869 541
2
985214736 985214737
3
2 3 1
3
2 3 3
6
1 1 1 1 1 1
6
100 100 100 100 100 100
8
100 100 100 100 100 100 100 100
8
2 16 1 8 64 1 4 32
10
1 2 4 7 1 1 1 1 7 2
10
7 1 1 1 3 1 3 3 2 3
10
1 4 4 1 1 1 3 3 3 1
10
2 3 2 2 1 2 2 2 2 2
4
999999999 999999999 999999999 999999999



*/