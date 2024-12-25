//https://codeforces.com/problemset/problem/1974/D
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    map<char,vector<int>>cnt;
    for (int i = 0; i <n; i++)
    {
        cnt[s[i]].push_back(i);
    }


    vector<pair<int,int>>ns;
    vector<pair<int,int>>ew;

    if(cnt.count('N') && cnt.count('S')){

           while (cnt['N'].size()>0 && cnt['S'].size()>0)
           {
               int f =  cnt['N'].back();
               int s = cnt['S'].back();
               ns.push_back({f,s});
               cnt['N'].pop_back();
               cnt['S'].pop_back();
           }
            
    }

    // for(auto p: ns){
    //     cout<<p.first<<" "<<p.second<<"\n";
    // }



      if(cnt.count('E') && cnt.count('W')){

           while (cnt['E'].size()>0 && cnt['W'].size()>0)
           {
               int f =  cnt['E'].back();
               int s = cnt['W'].back();
               ew.push_back({f,s});
               cnt['E'].pop_back();
               cnt['W'].pop_back();
           }
            
    }


    //  for(auto p: ew){
    //     cout<<p.first<<" "<<p.second<<"\n";
    // }

    

    char ans[n];
    int h = 0;
    int r = 0;

    if(ns.size()>0){
        auto p  = ns.back();
        ns.pop_back();
        int f = p.first;
        int s = p.second;
        ans[f] = 'H';
        ans[s] = 'H';
        h = 1;
           while (ns.size()>0)
           {
              p = ns.back();
              f = p.first;
              s = p.second;
              ans[f] = 'R';
              ans[s] = 'R';
              r = 1;
            ns.pop_back();
           }
    }





       if(ew.size()>0){
        auto p  = ew.back();
        ew.pop_back();
        int f = p.first;
        int s = p.second;
        ans[f] = 'R';
        ans[s] = 'R';
        r = 1;
           while (ew.size()>0)
           {
              p = ew.back();
              f = p.first;
              s = p.second;
              ans[f] = 'H';
              ans[s] = 'H';
              h = 1;
            ew.pop_back();
           }
    }



    for(auto[key,val]: cnt){
       if(val.size()%2==1){
          cout<<"NO\n";
          return;
       }
       else{

         while (val.size()>0)
         {
             int f = val.back();
             ans[f] = 'H';
             h = 1;
             val.pop_back();
             int s = val.back();
             ans[s] = 'R';
             r = 1;
             val.pop_back();
         }
         
       }
    }

    //  cout<<h<<" "<<r<<"\n";

    if(r == 1 && h ==1){
        for (int i = 0; i <n; i++)
        {
            cout<<ans[i];
        }
            cout<<"\n";
        
    }else{
        cout<<"NO\n";
    }

    
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       solve();
   }
   

return 0;

}


/*



10
6
NENSNE
3
WWW
6
NESSWS
2
SN
2
WE
4
SSNN
4
WESN
2
SS
4
EWNN
4
WEWE


*/