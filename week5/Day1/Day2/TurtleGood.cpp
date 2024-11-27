//https://codeforces.com/problemset/problem/2003/C
#include<bits/stdc++.h>
using namespace std;


class cmp{

public:

bool operator()(pair<char,int>a, pair<char,int>b){

   return a.second<b.second; // opposite

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
        string s;
        cin>>s;

        map<char,int>cnt;
        
        for(char ch: s){
            cnt[ch]++;
        }

        priority_queue<pair<char,int>,vector<pair<char,int>>,cmp>pq;

        for(auto[ch,num]: cnt){
              
              pq.push({ch,num});
        }

         s.clear();

        
        
        while (!pq.empty())
        {
            
             auto fs = pq.top();
             s.push_back(fs.first);
             pq.pop();
             
             

             if(pq.empty()){
                 if(fs.second-1>0){
                    pq.push({fs.first,fs.second-1});
                    continue;
                 }
                 else{
                    break;
                 }
             }

              
             auto sec = pq.top();
             s.push_back(sec.first);
             pq.pop();

             if(fs.second-1>0){
                 pq.push({fs.first,fs.second-1});
             }
             
            if(sec.second-1>0){
                pq.push({sec.first,sec.second-1});
            }
                 
             

        }
        
         

        cout<<s<<"\n";
        
   }
   

return 0;

}

/*

1
5
edddf

5
3
abc
5
edddf
6
turtle
8
pppppppp
10
codeforces


*/