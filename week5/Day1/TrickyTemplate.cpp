//https://codeforces.com/problemset/problem/1922/A
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
       string a,b,c;
       cin>>a>>b>>c;
       
       int i = 0;
       bool ans = false;
       while (i<n)
       {
           if(a[i]!=c[i] && b[i]!=c[i]){
               ans = true;
               break;
           }
            
            i++;
       }

    ans ? cout<<"YES\n" : cout<<"NO\n";
       
       
   }
   

return 0;

}



/*


4
1
a
b
c
2
aa
bb
aa
10
mathforces
luckforces
adhoccoder
3
acc
abd
abc



*/