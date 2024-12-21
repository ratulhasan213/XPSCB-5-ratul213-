//https://codeforces.com/problemset/problem/1841/B
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
   vector<int>arr;
   int val;
   int first;
   int intersect = false;
   int intersectVal;
   string ans;
   for (int i = 0; i <n; i++)
   {
       cin>>val;
       if(arr.empty()){
         arr.push_back(val);
         first = val;
         ans.push_back('1');
       }
       else{

        if(intersect){
            int last = arr.back();
            if(val<=first && val>=intersectVal && val>=last){
                arr.push_back(val);
                 ans.push_back('1');
            }
            else{
                 ans.push_back('0');
            }
        }

        else{

            int last = arr.back();
             if(val>=last){
               arr.push_back(val);
                ans.push_back('1');
             }
             else{

                if(val<=first){
                  arr.push_back(val);
                  intersect = true;
                  ans.push_back('1');
                  intersectVal = val;
                }
                else{
                    ans.push_back('0');
                }
                
             }
    
            
               

        }
         
             
          
       }
   }

   cout<<ans<<"\n";

   }
   

return 0;

}

/*

1
18
17 1 9 15 19 2 0 13 0 1 20 12 16 2 20 16 17 18



111100000000100110

111101010101110110
















3
9
3 7 7 9 2 4 6 3 4
5
1 1 1 1 1
5
3 2 1 2 3


*/