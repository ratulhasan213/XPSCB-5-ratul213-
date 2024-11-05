//https://codeforces.com/problemset/problem/1883/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>cnt;

        for (int i = 0; i <n; i++)
        {
            cnt[s[i]]++;
        }

        int odd = 0;

        for(auto[key,val]:cnt){
            if(val%2==1){
                odd++;
            }
        }
        
        if(odd<2){
            cout<<"YES\n";
        }
        else if(k==0 && odd>1){
            cout<<"NO\n";
        }
        else{
             
             if(odd-1<=k){
                cout<<"YES\n";
             }
             else{
                cout<<"NO\n";
             }
        }
        
   }
   

return 0;

}
