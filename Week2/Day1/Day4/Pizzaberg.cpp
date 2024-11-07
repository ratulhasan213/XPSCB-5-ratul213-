//https://codeforces.com/problemset/problem/1468/C
#include<bits/stdc++.h>
using namespace std;

class cmp{

public:

bool operator()(pair<int,int>a,pair<int,int>b){
     
     if(a.first == b.first){
        return a.second>b.second;
     }
     return a.first<b.first;
}

};

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int query;
   cin>>query;
   map<int,bool>check;
   priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
   queue<pair<int,int>>qu;

   int cus = 1;

   while (query--)
   {
       int q;
       cin>>q;
       if(q==1){
         int tk;
         cin>>tk;
         qu.push({cus,tk});
         pq.push({tk,cus});
         check[cus] = true;
         cus++;
       }
       else if(q==2){
        //mono 

        int customer = -1;

        while (!qu.empty())
        {
            customer = qu.front().first;
            if(check[customer]){
                qu.pop();
                check[customer] = false;
                break;
            }
            else{
                qu.pop();
            }


        }

        cout<<customer<<" ";
        
       }
       else{
        //poly:
            int customer = -1;

            while (!pq.empty())
            {
                 customer = pq.top().second;
                 if(check[customer]){
                    pq.pop();
                    check[customer] = false;
                    break;
                 }else{
                    pq.pop();
                 }
            }
            
           cout<<customer<<" ";
       }

   }
   

return 0;

}