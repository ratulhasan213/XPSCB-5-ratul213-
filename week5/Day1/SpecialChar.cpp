//https://codeforces.com/problemset/problem/1948/A
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
       if(n%2==0){
           string s;
           bool A = true;
           string ans;
           for (int i = 0; i <n/2; i++)
           {
                if(A){
                   ans.push_back('A');
                   ans.push_back('A');
                }
                else{
                    ans.push_back('B');
                    ans.push_back('B');
                }
                 A = !A;
           }

           cout<<"YES\n";
           cout<<ans<<"\n";
             
       }
       else{
        cout<<"NO\n";
       }
   }
   

return 0;

}

/*

3
6
1
2


*/