//https://codeforces.com/contest/1974/problem/B
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
       string s;
       cin>>s;
       set<char>st;
       for (int i = 0; i <n; i++)
       {
           st.insert(s[i]);
       }

       vector<char>v;
      
       for(char val:st){
        v.push_back(val);
       }

       int start = 0;
       int end = v.size()-1;
       map<char,char>mark;

       while (start<=end)
       {
           mark[v[start]] = v[end];
           mark[v[end]] = v[start];
           start++;
           end--;
       }
       
       for(char ch: s){
        cout<<mark[ch];
       }
       
       cout<<"\n";
       
   }
   

return 0;

}

/*

1
10
codeforces



5
10
serofedsoc
3
ttf
9
tlrhgmaoi
1
w
15
hnndledmnhlttin


*/