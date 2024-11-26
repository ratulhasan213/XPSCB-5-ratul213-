//https://codeforces.com/problemset/problem/1747/B
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
        for (int  i = 0; i <n; i++)
        {
            s.push_back('B');
            s.push_back('A');
            s.push_back('N');
            
        }

        int start = 0;
        int end = (3*n)-1;
        int op = 0;

        vector<pair<int,int>>ans;

         while (start<end)
         {
            if(s[start]!='A'){
                start++;
            }

            if(s[end]!='N'){
                end--;
            }

            if(s[start] == 'A' && s[end] == 'N'){

                ans.push_back({start+1,end+1});
                start++;
                end--;
                op++;
            }
         }
         
        cout<<op<<"\n";
        for(auto p : ans){
            cout<<p.first<<" "<<p.second<<"\n";
        }
        
   }
   

return 0;

}


/*

2
1
2


*/