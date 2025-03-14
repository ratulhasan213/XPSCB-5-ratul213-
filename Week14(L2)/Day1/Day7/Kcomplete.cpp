//https://codeforces.com/problemset/problem/1332/C
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
       int n,k;
       cin>>n>>k;
       string s;
       cin>>s;

       int left,right,m,total;
       map<char,int>cnt;
       ll ans = 0;

        // cout<<"\n\n";
       for (int i = 0; i <=(k/2); i++)
       {

        //   cout<<"i-> "<<i<<"\n";
             m = 0;
             total = 0;
             left = i;
             cnt.clear();
             
             while (left<n)
             {
                // cout<<"left: "<<left<<" ";
                right = left+(k-1)-(i*2);
                // cout<<"right: "<<right<<"\n";

                if(right<left){
                    break;
                }

                cnt[s[left]]++;
                m = max(m,cnt[s[left]]);

                if(left!=right){
                    cnt[s[right]]++;
                    m = max(m,cnt[s[right]]);
                }
                
                // cout<<"max: "<<m<<"\n";

                if(left!=right){
                    total+=2;
                }
                else{
                    total++;
                }
                left+=k;
                // cout<<"tot: "<<total<<"\n";
             }

             ans+=(total - m);
            //  cout<<"ans: "<<ans<<"\n\n\n";
           
             
       }


       cout<<ans<<"\n";
       
   }
   

return 0;

}


/*



4
6 2
abaaba
6 3
abaaba
36 9
hippopotomonstrosesquippedaliophobia
21 7
wudixiaoxingxingheclp


*/