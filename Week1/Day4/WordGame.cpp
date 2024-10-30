#include<bits/stdc++.h>
using namespace std;


vector<int> score(map<string,vector<int>> &mp){
    vector<int>ans(3);
     for(auto[str,v]:mp){
        if(v.size()!=3){
            if(v.size()==2){
                 ans[v[0]]++;
                 ans[v[1]]++;
            }
            else{
                ans[v[0]]+=3;
            }
        }
     }

     return ans;
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n;
      cin>>n;

      map<string,vector<int>>mp;
      string s;
      for (int i = 0; i <3; i++)
      {
         for (int j = 0; j <n; j++)
         {
            cin>>s;
            // if(mp.find(s)==mp.end()){
            //     vector<int>v;
            //     v.push_back(i);
            //     mp[s] = v;
            // }
            // else{
            //     vector<int>v = mp[s];
            //     v.push_back(i);
            //     mp[s] = v;
            // }

            mp[s].push_back(i);
         }
         
      }

     vector<int>ans = score(mp);

       for(int val:ans){
        cout<<val<<" ";
       }

       cout<<"\n";
      
      
   }
    

return 0;

}


/*
1
5
iat roc hem ica lly
bac ter iol ogi sts
bac roc lly iol iat



3
1
abc
def
abc
3
orz for qaq
qaq orz for
cod for ces
5
iat roc hem ica lly
bac ter iol ogi sts
bac roc lly iol iat



*/