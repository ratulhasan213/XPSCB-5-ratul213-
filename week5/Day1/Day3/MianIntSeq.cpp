//https://codeforces.com/problemset/problem/1726/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n,m;
       cin>>n>>m;
       int arr[n];
       if(n>m){
        cout<<"NO\n";
       }
       else if(n%2==0 && m%2==0){

          int sum = 0;
           for (int i = 0; i <n-2; i++)
           {
                arr[i] = 1;
                sum++;
           }

           arr[n-2] = (m-sum)/2;
           arr[n-1] = arr[n-2]; 

           cout<<"YES\n";
           for (int i = 0; i <n; i++)
           {
               cout<<arr[i]<<" ";
           }
            cout<<"\n";
            
       }

       else if((n%2==1 && m%2==1) || (n%2==1 && m%2==0)){
            int sum = 0;
           for (int i = 0; i <n-1; i++)
           {
                arr[i] = 1;
                sum++;
           }

           arr[n-1] = (m-sum);
           cout<<"YES\n";
           for (int i = 0; i <n; i++)
           {
               cout<<arr[i]<<" ";
           }
            cout<<"\n";
           
       }
       else{
        cout<<"NO\n";
       }
   }
   

return 0;

}

/*

4
1 3
6 12
2 1
3 6


*/