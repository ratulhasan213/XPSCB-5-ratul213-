//https://codeforces.com/problemset/problem/2005/A
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

    map<char,int>cnt;

    int oc = n/5;
    int rem = n%5;

    cnt['a'] = oc;
    cnt['e'] = oc;
    cnt['i'] = oc;
    cnt['o'] = oc;
    cnt['u'] = oc;



    for(auto[key,occ]: cnt){
        if(rem == 0){
            break;
        }

        cnt[key] = oc+1;
        rem--;
    }



    for(auto[key,occ]: cnt){
        
        while (occ--)
        {
            cout<<key;
        }
        
    }

      

      cout<<"\n";
      
   }
   

return 0;

}


/*


1
9

3
2
3
6


*/