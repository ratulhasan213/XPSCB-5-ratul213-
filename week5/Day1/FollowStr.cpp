//https://codeforces.com/problemset/problem/1927/B
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
        
        map<char,int>cnt;
        char ch = 'a';
       string ans;

       for (int i = 0; i <n; i++)
       {
           cin>>val;
           if(val==0){
            ans.push_back(ch);
             cnt[ch] = 1;
             ch++;
           }
           else{
             for(auto[k,v]: cnt){
                if(v == val){
                    ans.push_back(k);
                    cnt[k]++;
                    break;
                }
             }
           }

       }

       cout<<ans<<"\n";
       
   }
   

return 0;

}


/*

5
11
0 0 0 1 0 2 0 3 1 1 4
10
0 0 0 0 0 1 0 1 1 0
1
0
8
0 1 2 3 4 5 6 7
8
0 0 0 0 0 0 0 0


*/