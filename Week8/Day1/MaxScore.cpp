//https://www.codechef.com/problems/MAXIMSCORE?tab=statement
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

      priority_queue<int,vector<int> , greater<int>>pq;
     

        pq.push(abs(arr[0] -arr[1]));
        pq.push(abs (arr[n-1] - arr[n-2] ));

        for (int i = 1; i <n-1; i++)
        {
            int x = abs ( arr[i] - arr[i-1]);
            int y = abs (arr[i] - arr[i+1] );

            pq.push(max(x,y));
        }

        cout<<pq.top()<<"\n";
        
        
   }
   

return 0;

}

/*


1
4
1 10 14 20



1
5
-10 10 40 -50 30


3
3
1 1 1
4
1 2 3 4
5
-10 10 40 -50 30




*/