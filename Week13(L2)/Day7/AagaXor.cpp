//https://codeforces.com/problemset/problem/1516/B
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
        int n;
        cin>>n;
        vector<ll>arr(n);
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }

        int end = 0;
        bool ans = false;
        while (end<n-1)
        {  
            ll x = 0;
            for (int i=0; i<=end; i++)
            {
               x = x^arr[i];
            }

            bool f = false;
     
            int in = end+1;
            ll y = 0;
            while (in<n)
            {
                y = y^arr[in];
                if(y == x){
                  f = true;
                  y = 0;
                }
                in++;
            }
    
            if(y == 0 && f){
                ans = true;
                break;
            }
              end++;
    
        }
    
    
        if(ans){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }


    }
    
return 0;

}


/*


1
3
962815211 962815211 962815211

2
3
0 2 2
4
2 3 1 10


*/