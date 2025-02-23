//https://codeforces.com/problemset/problem/1547/C
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
      int k,n,m;
      cin>>k>>n>>m;
      
      vector<int>arr(n);
      vector<int>brr(m);

      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
      }


      for (int i = 0; i <m; i++)
      {
        cin>>brr[i];
      }

      

      int i = 0;
      int j = 0;

      vector<int>ans;
      bool a = true;
      while (i<n && j<m)
      {
        if(arr[i] == 0){
            ans.push_back(0);
            k++;
            i++;
        }
        else if(brr[j] == 0){
            ans.push_back(0);
            k++;
            j++;
        }
        else{
            if(arr[i]<=brr[j]){
               if(arr[i]<=k){
                 ans.push_back(arr[i]);
                 i++;
               }
               else{
                a = false;
                break;
               }
            }
            else{
              
                if(brr[j]<=k){
                    ans.push_back(brr[j]);
                    j++;
                }
                else{
                    a = false;
                    break;
                }

            }
        }
      }


      while (i<n)
      {
         if(arr[i] == 0){
            ans.push_back(0);
             k++;
         }
         else{
             if(arr[i]>k){
                a = false;
                break;
             }
             else{
                ans.push_back(arr[i]);
             }
         }
         i++;
      }



      while (j<m)
      {
         if(brr[j] == 0){
            ans.push_back(0);
             k++;
         }
         else{
             if(brr[j]>k){
                a = false;
                break;
             }
             else{
                ans.push_back(brr[j]);
             }
         }
         j++;
      }


      if(a){
         for(int x: ans){
            cout<<x<<" ";
         }
      }
      else{
        cout<<"-1";
      }
      
      cout<<"\n";

      
      
   }
   

return 0;

}


/*


1

3 2 2
2 0
0 5




5

3 2 2
2 0
0 5

4 3 2
2 0 5
0 6

0 2 2
1 0
2 3

5 4 4
6 0 8 0
0 7 0 9

5 4 1
8 7 8 0
0





5
3 2 2
2 0
0 5
4 3 2
2 0 5
0 6
0 2 2
1 0
2 3
5 4 4
6 0 8 0
0 7 0 9
5 4 1
8 7 8 0
0




*/