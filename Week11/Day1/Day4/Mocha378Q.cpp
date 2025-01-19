//https://codeforces.com/problemset/problem/1975/B
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
       int m = INT_MAX;
       for (int i = 0; i <n; i++)
       {
          cin>>arr[i];
          m = min(m,arr[i]);
       }
         
         vector<int>v;
          
          int x = INT_MAX;
        for (int i = 0; i <n; i++)
        {
            if(arr[i]%m!=0){
                x = min(x,arr[i]);
                v.push_back(arr[i]);
            }
        }

        if(v.size()==0){
            cout<<"YES\n";
        }
        else{
            
            bool ans = true;
           for(int val: v){
              if(val%x!=0){
                  ans = false;
                  break;
              }
           }

           if(ans){
            cout<<"YES\n";
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
4
2 2 2 3

1
3
7 3 8

1
5
4 12 2 6 3


4
3
7 3 8
5
7 1 9 3 5
5
4 12 2 6 3
5
7 49 9 3 1000000000



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
        ll arr[n];
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }


        sort(arr,arr+n);

        ll x = arr[0];
        ll y = -1;


        for (int i = 0; i <n; i++)
        {
            if(arr[i]!=x){
                y = arr[i];
                break;
            }
        }

        if(y==-1){
            y = x;
        }
        
    
        bool ans = true;
        for (int i = 0; i <n; i++)
        {
            if(arr[i]%x!=0 && arr[i]%y!=0){
                ans = false;
                break;
            }
        }



        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

      
        
        

       }


return 0;

}


*/