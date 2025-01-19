//https://codeforces.com/problemset/problem/1919/B
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

        int plus = 0;
        int minus = 0;

        for (int i = 0; i <n; i++)
        {
            if(s[i]=='+'){
                plus++;
            }
            else{
                minus++;
            }
        }

        cout<<abs(plus-minus)<<"\n";
        
   }
   

return 0;

}