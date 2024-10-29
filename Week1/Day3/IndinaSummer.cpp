#include<bits/stdc++.h>
using namespace std;


bool  alreadyExist(vector<pair<string,string>>&v, string flow, string col){
    for(auto[f,c]:v){
        if(f==flow && c==col){
           return true;
        }
    }

    return false;
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   vector<pair<string,string>>v;
   while (n--)
   {
       string f,c;
       cin>>f>>c;
       if(alreadyExist(v,f,c)){
        continue;
       }
       pair<string,string>temp = make_pair(f,c);
       v.push_back(temp);
   }

   cout<<v.size()<<"\n";
   

return 0;

}