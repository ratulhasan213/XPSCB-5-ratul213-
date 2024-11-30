//https://codeforces.com/problemset/problem/1738/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;



bool isSorted(ll arr[], int s, int e){
  for (int i = s+1; i <e; i++)
  {
       if(arr[i]<arr[i-1]){
        return false;
       }
  }

  return true;
  
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n,k;
       cin>>n>>k;

      

       ll sum[k];
       for ( int i = 0; i <k; i++)
       {
           cin>>sum[i];
       }

        if(k==1){
          cout<<"YES\n";
       }

       else{

               ll arr[n]={0};

                  int si = k-1;
               int ai = n-1;

              while (si>=1)
              {
                 arr[ai] = sum[si] - sum[si-1];
                 si--;
                 ai--;
              }



              bool srt = isSorted(arr,ai+1,n);

              if(srt){

                 
                 ll t = (ai+1)*arr[ai+1];

                 if(t>=sum[0]){
                    cout<<"YES\n";
                 }
                 else{
                  cout<<"NO\n";
                 }

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
3 2
3 4



4
5 5
1 2 3 4 5
7 4
-6 -5 -3 0
3 3
2 3 4
3 2
3 4


*/