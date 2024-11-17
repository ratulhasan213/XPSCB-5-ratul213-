#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   string s;
   map<string,int>check;
   stack<string>st;
    
   for (int i = 0; i <n; i++)
   {
      cin>>s;
      st.push(s);
   }


   while (!st.empty())
   {
      s = st.top();
      st.pop();
      if(check.count(s)==0){
          int len = s.size();
          cout<<s[len-2]<<s[len-1];
          check[s]++;
      }
   }
   
   

return 0;

}


