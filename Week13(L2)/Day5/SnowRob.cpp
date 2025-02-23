//https://codeforces.com/problemset/problem/1272/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   int test;
   cin>>test;
   while (test--)
   {
     string s;
     cin>>s;
      map<char, int>cnt;
      cnt['L'] = 0;
      cnt['R'] = 0;
      cnt['u'] = 0;
      cnt['D'] = 0;

      for(char ch: s){
         cnt[ch]++;
      }

      int left = min(cnt['L'] , cnt['R']);
      int right = 0;
      if(left!=0){
        right = left;
      }

      int up = min(cnt['U'], cnt['D']);
      int down = 0;
      if(up!=0){
        down = up;
      }

      if(!left && !right && !up && !down){
        cout<<"0\n";
      }
      else{
        if(!left && !right){
            cout<<2<<"\n";
            cout<<"UD\n";
        }
        else if(!up && !down){
            cout<<"2\n";
            cout<<"LR\n";
        }
        else{
            cout<<right+up+left+down<<"\n";
            for (int i = 0; i <right; i++)
            {
                cout<<"R";
            }
            for (int i = 0; i <up; i++)
            {
                cout<<"U";
            }

            for (int i = 0; i <right; i++)
            {
                cout<<"L";
            }

            for (int i = 0; i <down; i++)
            {
                cout<<"D";
            }
            
            cout<<"\n";
            
            
        }
      }
   }
   

return 0;

}


/*

6
LRU
DURLDRUDRULRDURDDL
LRUDDLRUDRUL
LLLLRRRR
URDUR
LLL




*/