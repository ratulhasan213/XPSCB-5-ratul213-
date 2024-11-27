//https://codeforces.com/problemset/problem/1993/B
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
       int n;
       cin>>n;
       ll num;
       bool alleven = true;
       bool allodd = true;

     vector<ll>even;
     vector<ll>odd;


       for (int i = 0; i <n; i++)
       {
          cin>>num;
          if(num%2==0){
             allodd = false;
             even.push_back(num);
          }
          else{
            alleven = false;
            odd.push_back(num);
          }
       }
      

       if(alleven || allodd){
        cout<<"0\n";
       }
       else{
               sort(even.begin(),even.end());
               sort(odd.begin(),odd.end());

               ll maxOdd = odd.back();
               int ans = 0;

               for(ll val: even){
                 if(val>maxOdd){
                    ans = even.size()+1;
                    break;
                 }
                 else{
                    ans++;
                    maxOdd+=val;
                 }
               }

               cout<<ans<<"\n";
       }

       
   }
   

return 0;

}


/*

7
5
1 3 5 7 9
4
4 4 4 4
3
2 3 4
4
3 2 2 8
6
4 3 6 1 2 1
6
3 6 1 2 1 2
5
999999996 999999997 999999998 999999999 1000000000


*/