//https://codeforces.com/problemset/problem/1104/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   string s;
   cin>>s;
   int len = s.size();

   stack<char>st;

   int total = 0;

   for (int i = 0; i <len; i++)
   {
      if(st.empty()){
        st.push(s[i]);
      }
      else{

        if(s[i] == st.top()){
            total++;
            st.pop();
        }else{
            st.push(s[i]);
        }
      }
   }


   if(total%2==0){
    cout<<"NO\n";
   }
   else{
    cout<<"YES\n";
   }
   

return 0;

}