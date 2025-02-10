//https://codeforces.com/problemset/problem/1933/D
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
       vector<ll>arr(n);
       for (int i = 0; i <n; i++)
       {
           cin>>arr[i];
       }

       sort(arr.begin(),arr.end());

    //    for(int x:arr){
    //     cout<<x<<" ";
    //    }

    //    cout<<"\n";

       if(arr[0]!=arr[1]){
         cout<<"YES\n";
       }
       else{
          int end = n-1;
          bool ans = false;
          while (end>0)
          {
             if(arr[end]%arr[0]!=0)
             {
                 ans = true;
                 break;
             }
             end--;
          }

          if(ans)
          {
            cout<<"YES\n";
          }
          else{
            cout<<"NO\n";
          }
          
       }
       
   }
   

return 0;

}


/*

1
5
1 1 2 3 7

8
6
1 2 3 4 5 6
5
3 3 3 3 3
3
2 2 3
5
1 1 2 3 7
3
1 2 2
3
1 1 2
6
5 2 10 10 10 2
4
3 6 9 3



*/