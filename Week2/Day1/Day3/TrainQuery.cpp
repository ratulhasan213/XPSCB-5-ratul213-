//https://codeforces.com/problemset/problem/1702/C
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
    int station,query;
    cin>>station>>query;
    
    map<ll,pair<int,int>>cnt;
    ll val;
    for (int i = 0; i <station; i++)
    {
        cin>>val;
        if(cnt.count(val)){
            cnt[val].second = i;
        }
        else{
            cnt[val] = {i,-1};
        }
    }

   
    ll a,b;

    for (int i = 1; i <=query; i++)
    {
         cin>>a>>b;
         if(cnt.find(a)!=cnt.end()  && cnt.find(b)!=cnt.end()){
                int leftA = cnt[a].first;
                int  rightA = cnt[a].second;

                int leftB = cnt[b].first;
                int rightB = cnt[b].second;

                if(rightB==-1){
                    if(leftA<leftB){
                        cout<<"YES\n";
                    }
                    else{
                        cout<<"NO\n";
                    }
                }
                else{
                    if(leftA<rightB){
                        cout<<"YES\n";
                    }
                    else{
                        cout<<"NO\n";
                    }
                }
         }
         else{
            cout<<"NO\n";
         }

    }
    
    
}

   

return 0;

}
