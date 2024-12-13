//https://codeforces.com/problemset/problem/1867/B
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
   cin>>s;

   int atleast = 0;
   int start = 0;
   int end = n-1;

   int pairs = 0;

   while (start<end)
   {
     if(s[start]!=s[end]){
        atleast++;
     }
     else{
        pairs+=2;
     }
     start++;
     end--;
   }

   int arr[n+1];
   for (int i = 0; i <=n; i++)
   {
       if(i<atleast){
         arr[i] = 0;
       }
       else if(i == atleast){
          arr[i] = 1;
       }
       else{
         //i>atleast

           int rem = i - atleast;

             if(n%2==0){
              if(rem%2==0){
                  if(rem<=pairs){
                    arr[i] = 1;
                  }
                  else{
                    arr[i] = 0;
                  }
              }
              else{
                 arr[i] = 0;
              }
             }
             else{
                 
                 if(rem%2==0){
                     if(rem<=pairs){
                        arr[i] = 1;
                     }
                     else{
                        arr[i] = 0;
                     }
                 }else{
                   if(rem<=(pairs+1)){
                    arr[i] = 1;
                   }
                   else{
                    arr[i] = 0;
                   }
                 }
             }

       }
   }



   for (int i = 0; i <=n; i++)
   {
       cout<<arr[i];
   }
   cout<<"\n";

  }
  
   

return 0;

}

/*


5
6
101011
5
00000
9
100100011
3
100
1
1


*/