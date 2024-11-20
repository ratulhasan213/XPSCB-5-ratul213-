//https://codeforces.com/problemset/problem/1729/B
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
      string s;
      cin>>n>>s;
      
      int i = n-1;
      string ans;

     map<int,char>cnt;
     char ch = 'a';
     for (int i = 1; i <=26; i++)
     {
       cnt[i] = ch;
       ch++;
      }


      while (i>=0)
      {
         if(s[i]!='0'){
            ans.push_back(cnt[s[i]-'0']);
            i--;
         }
         else{
            int num = 0;
            num = s[i-2]-'0';
            num = (num*10)+(s[i-1]-'0');
            ans.push_back(cnt[num]);
            i-=3;
         }
      
     
      }

      reverse(ans.begin(),ans.end());

      cout<<ans<<"\n";
      
   }
   

return 0;

}


/*


1
6
315045


9
6
315045
4
1100
7
1213121
6
120120
18
315045615018035190
7
1111110
7
1111100
5
11111
4
2606


code
aj
abacaba
ll
codeforces
aaaak
aaaaj
aaaaa
zf


*/