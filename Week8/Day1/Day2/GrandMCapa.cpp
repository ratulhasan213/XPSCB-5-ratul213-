//https://codeforces.com/problemset/problem/1582/C
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
       int n;
       cin>>n;
       string s;
       cin>>s;

       set<char>st;
       for (int i = 0; i <n; i++)
       {
          st.insert(s[i]);
       }
       
       bool ans = false;
       ll p = 1e10;
     
       
       for (char ch: st)
       {
       
         int start = 0;
         int end = n-1;
         bool canMake = true;
         ll step = 0;
           while (start<end)
           {
              if(s[start]!=s[end]){
                  
                  if(s[start] == ch){
                    start++;
                    step++;
                  }
                  
                  else if(s[end] == ch){
                    end--;
                    step++;
                  }
                  else{
                    canMake = false;
                    break;
                  }
              }
              else{
                start++;
                end--;
              }
           }

           if(canMake){
            ans = true;
             p = min(p,step);
             
           }
           
       }

       if(ans){
        cout<<p<<"\n";
       }
       else{
        cout<<"-1\n";
       }
       
     

      

    
       
   }
   

return 0;

}


/*


5
8
abcaacab
6
xyzxyz
4
abba
8
rprarlap
10
khyyhhyhky


*/