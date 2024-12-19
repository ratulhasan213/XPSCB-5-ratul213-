//https://www.codechef.com/problems/STRAME
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
     
     int occ = 0;
     
     stack<char>st;
     for (int i = 0; i <n; i++)
     {
        if(!st.empty() && st.top()!=s[i]){
            st.pop();
            occ++;
        }
        else{
            st.push(s[i]);
        }
     }

     if(occ%2==0){
       cout<<"Ramos\n";
     }else{
        cout<<"Zlatan\n";
     }
     
      
   }
   

return 0;

}

/*

5
1
0
2
11
2
10
3
111
3
101


*/