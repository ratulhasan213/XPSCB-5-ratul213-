//https://codeforces.com/problemset/problem/1741/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int cnt;

void needSwap(vector<int>& a, vector<int>& b){

    int big = a[0];
    int small = b[0];

    for (int i = 0; i <a.size(); i++)
    {
        big = max(big,a[i]);
    }
    

    for (int i = 0; i <b.size(); i++)
    {
        small = min(small,b[i]);
    }

    if(big>small){
       //swapNeeded
       cnt++;
       vector<int>temp = a;
       a = b;
       b = temp;

    }

    
}


void divide(vector<int> arr, vector<int>& ans){
    if(arr.size()==1){
        ans.push_back(arr[0]);
        return;
    }

    int n = arr.size()/2;

    vector<int>a;
    vector<int>b;

    for (int i = 0; i<n; i++)
    {
        a.push_back(arr[i]);
    }

    for (int i = n; i<arr.size(); i++)
    {
        b.push_back(arr[i]);
    }

    needSwap(a,b);

    divide(a,ans);
    divide(b,ans);



    
    
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 
   

   int test;
   cin>>test;
   while (test--)
   {

    int n;
    cin>>n;

   vector<int>arr(n);
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }
   
   vector<int>ans;
   cnt = 0;

   divide(arr,ans);

   bool isSorted = true;

   for (int i = 1; i <n; i++)
   {
      if(ans[i]<ans[i-1]){
         isSorted = false;
         break;
      }

   }


   if(isSorted){
     cout<<cnt<<"\n";
   }
   else{
    cout<<"-1\n";
   }


   }
   

return 0;

}


/*


4
8
6 5 7 8 4 3 1 2
4
3 1 4 2
1
1
8
7 8 4 3 1 2 6 5



*/