#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   map<string,string>handle;
   for (int i = 0; i <n; i++)
   {
       string u,v;
       cin>>u>>v;

       auto it = handle.find(u);

       if(it==handle.end()){

        bool flag = false;
          for(auto [key,val]:handle){
             if(val == u){
                handle[key] = v;
                flag = true;
             }
          }

          if(!flag){
             handle[u] = v;
          }
       }

       else{

            handle[u] = v;
        
       }
         
       
   }


   cout<<handle.size()<<"\n";
   for(auto [key,val]: handle){
    cout<<key<<" "<<val<<"\n";
   }
   

return 0;

}


/*

5
Ratul Rafid
Vanu Peter
Peter rodi
Rafid Mike
Fahim Ela


*/