//https://codeforces.com/problemset/problem/1805/A
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

       int arr[n];

       int xr = 0;
       for (int i = 0; i <n; i++)
       {
             cin>>arr[i];
             xr = (xr xor arr[i]);
       }

       if(xr==0){
        cout<<"0\n";
       }
       else{
           
           int newXr;
           int i;
           for (i = 1; i <=256; i++)
           {
                newXr = 0;
               for (int j = 0; j <n; j++)
               {
                   newXr = (newXr xor (arr[j] xor i));
               }
               
                if(newXr == 0){
                    break;
                }
                
           }

           if(newXr == 0){
            cout<<i<<"\n";
           }
           else{
            cout<<"-1\n";
           }


           
       }
       
   }
   

return 0;

}

/*

1
4
0 1 2 3


5
3
1 2 5
3
1 2 3
4
0 1 2 3
4
1 2 2 3
1
1


*/