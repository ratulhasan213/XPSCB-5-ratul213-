//https://www.codechef.com/problems/MEBA
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

      set<int>st;

       for (int i = 0; i < n; i++)
       {
            cin>>val;

            if(val!=0){
              st.insert(val);
            }
         
       }

       if(st.size()>=2){
        cout<<"NO\n";
       }
       else{
        cout<<"YES\n";
       }
       
   }
   

return 0;

}