//https://codeforces.com/problemset/problem/1598/B
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

      map<int,set<int>>cnt;
      int val;

      for (int i = 1; i <=n; i++)
      {
        for (int j = 1; j <=5; j++)
        {
            cin>>val;
            if(val){
                cnt[j].insert(i);
            }
        }
        
      }


      bool ans = false;
      set<int>st;

      for (int i = 1; i <=5; i++)
      {
         if( cnt.count(i) &&  cnt[i].size()>=n/2){
               for(int y: cnt[i]){
                 st.insert(y);
               }
             for (int j = i+1; j<=5; j++)
            {
                 if(cnt[j].size()>=n/2){
                      
                      int ct = 0;
                     for(int x: cnt[j]){
                         if(!st.count(x)){
                           ct++;
                         }
                     }

                     if(st.size()+ct == n){
                      ans = true;
                     }

                  
                 }

                 if(ans){
                  break;
                 }

            }

         }

             if(ans){
               break;
            }

            st.clear();
      
         
      }

       
        
      if(ans){
        cout<<"YES\n";
      }
      else{
        cout<<"NO\n";
      }
      



    //   for(auto[day,stud]: cnt){
    //     cout<<day<<"->: ";
    //     for(int s: stud){
    //         cout<<s<<" ";
    //     }
    //     cout<<"\n";
    //   }
      
   }
   

return 0;

}






/*


1
4
1 0 0 1 0
0 1 0 0 1
0 0 0 1 0
0 1 0 1 0



2
4
1 0 0 1 0
0 1 0 0 1
0 0 0 1 0
0 1 0 1 0
2
0 0 0 1 0
0 0 0 1 0



*/