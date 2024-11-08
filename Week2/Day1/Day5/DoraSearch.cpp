//https://codeforces.com/problemset/problem/1793/C
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
       int min = 1;
       int max = n;

       int arr[n];
       for (int i = 0; i <n; i++)
       {
           cin>>arr[i];
       }

       int start = 0;
       int end = n-1;

       bool maxUpdate = false;
       bool minUpdate = false;

       while (start<end)
       {
            if(arr[start]!=max && arr[start]!=min && arr[end]!=max && arr[end]!=min){
                break;
            }

            if(arr[start]==max){
                start++;
                maxUpdate = true;
            }
            else if(arr[start]==min){
                start++;
                minUpdate = true;
            }


            if(arr[end]==max){
                end--;
               maxUpdate = true;
            }
            else  if(arr[end]==min){
                end--;
               minUpdate = true;
            }

          if(maxUpdate){
            max--;
            maxUpdate = false;
          }
          
          if(minUpdate){
            min++;
            minUpdate = false;
          }


       }


       if(start<end){
        cout<<start+1<<" "<<end+1<<"\n";
       }
       else{
        cout<<-1<<"\n";
       }
       
       
   }
   

return 0;

}


/*


4
3
1 2 3
4
2 1 4 3
7
1 3 2 4 6 5 7
6
2 3 6 5 4 1



*/