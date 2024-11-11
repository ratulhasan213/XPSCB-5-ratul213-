//https://codeforces.com/problemset/problem/1986/C
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n,m;
       cin>>n>>m;
       string s;
       cin>>s;
   

       int val;
     
       set<int>st;
       for (int i = 0; i <m; i++)
       {
          cin>>val;
           st.insert(val);
       
       }

     

       string c;
       cin>>c;
       sort(c.begin(),c.end());

       int ci = 0;

       for (auto index: st)
       {
          s[index-1] = c[ci];
          ci++;

       }
       
       cout<<s<<"\n";

       
   }
   

return 0;

}

/*

1
7 4
abacaba
1 3 5 7
damn



abdcmbn




4
1 2
a
1 1
cb
4 4
meow
1 2 1 4
zcwz
7 4
abacaba
1 3 5 7
damn
7 10
traktor
7 6 5 4 3 2 1 6 4 2
codeforces


b
cwoz
abdcmbn
ccdeefo


b
cwoz
abdcmbn
ofeedcc


*/