//https://codeforces.com/problemset/problem/1141/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   int arr[2*n];

    for (int i = 0; i <n; i++)
    {
         cin>>arr[i];
    }
    
    int j = 0;
    for (int i = n; i <2*n; i++)
    {
        arr[i] = arr[j];
        j++;
    }



    int ans = 0;


    int indx = 0;
    while (indx<2*n)
    {
        int len = 0;
        while ( indx<2*n && arr[indx]==1)
        {
            len++;
            indx++;

        }

        ans = max(ans,len);
        indx++;
        
    }
    


    cout<<ans<<"\n";
    
    
    
    

return 0;

}



/*

5
1 0 1 0 1

6
0 1 0 1 1 0


7
1 0 1 1 1 0 1


3
0 0 0


*/