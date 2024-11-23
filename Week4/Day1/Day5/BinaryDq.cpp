//https://codeforces.com/problemset/problem/1692/E
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n,k;
       cin>>n>>k;


       int arr[n];
       int s = 0;
       for (int i = 0; i <n; i++)
       {
           cin>>arr[i];
           s+=arr[i];
       }

       if(s<k){
        cout<<-1<<"\n";
       }

     else{

              int start = 0;
              int end = 0;

              int len = 0;
              int sum = 0;

             while (end<n)
           {
                 sum+=arr[end];

                while (sum>k && start<=end)
                {
                    sum-=arr[start];
                     start ++;
                 }

                len = max(len,end-start+1);
                 end++;
           
           }

                cout<<(n-len)<<"\n";
       
       }

   }
   

return 0;

}

/*

1
16 2
1 1 0 0 1 0 0 1 1 0 0 0 0 0 1 1



7
3 1
1 0 0
3 1
1 1 0
9 3
0 1 0 1 1 1 0 0 1
6 4
1 1 1 1 1 1
5 1
0 0 1 1 0
16 2
1 1 0 0 1 0 0 1 1 0 0 0 0 0 1 1
6 3
1 0 1 0 0 0



*/