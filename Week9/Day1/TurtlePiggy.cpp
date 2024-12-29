//https://codeforces.com/problemset/problem/2003/B
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
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
      }

      sort(arr,arr+n);
      cout<<arr[n/2]<<"\n";;
      
   }
   

return 0;

}

/*


5
2
1 2
3
1 1 2
3
1 2 3
5
3 1 2 2 3
10
10 2 5 2 7 9 2 5 10 7


*/