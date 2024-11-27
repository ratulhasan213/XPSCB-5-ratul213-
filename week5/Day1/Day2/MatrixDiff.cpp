//https://codeforces.com/problemset/problem/1783/B
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
        
      int len = n*n;
      int num = len;
       int arr[len];
       int idx = 0;
       int  x = 0;
    
       while (idx<len)
       {
            arr[idx] = (num-x);
            idx++;
            x++;
            if(idx<len){
                arr[idx] = x;
                idx++;
            }else{
                break;
            }
       }

  

       
       int start = 0;
       int end = n-1;
       bool rev = false;

       while (end<len)
       {
           if(rev){
               
                for (int i = end; i>=start; i--)
              {
                 cout<<arr[i]<<" ";
              }

           }
           else{
               
              for (int i = start; i <=end; i++)
              {
                 cout<<arr[i]<<" ";
              }
             
           }

            cout<<"\n";
            start+=n;
            end+=n;
            rev = !rev;
       }
       
       

       
    
   }
   

return 0;

}

/*


2
2
3



1
3

*/