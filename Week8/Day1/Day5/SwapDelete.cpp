//https://codeforces.com/problemset/problem/1913/B
#include<bits/stdc++.h>
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
      string t;
       int one = 0;
       int zero = 0;
       for(char ch: s){
          if(ch=='1'){
            one++;
          }
          else{
            zero++;
          }
       }

       for(char ch: s){
          if(ch == '1'){
             if(zero>0){
                t.push_back('0');
                zero--;
             }
             else{
                break;
             }
          }
          else{
             // ch == '1'

             if(one>0){
              one--;
              t.push_back('1');
             }
             else{
                break;
             }
          }
       }

       cout<<s.size()-t.size()<<"\n";
      
   }
   

return 0;

}

/*

4
0
011
0101110001
111100




*/