//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n,q;


string search(ll arr[] , ll target){
     
     int start = 0;
     int end = n-1;

     while (start<=end)
     {
        int mid = start+(end-start)/2;
        if(arr[mid] == target){
            return "YES";
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

     }
     



     return "NO";
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

 cin>>n>>q;
 ll arr[n];
 for (int i = 0; i <n; i++)
 {
    cin>>arr[i];
 }


ll qr[q];
for (int i = 0; i <q; i++)
{
    cin>>qr[i];
}



for (int i = 0; i <q; i++)
{
    cout<<search(arr,qr[i])<<"\n";
}

 
 

   

return 0;

}


/*



10 10
1 61 126 217 2876 6127 39162 98126 712687 1000000000
100 6127 1 61 200 -10000 1 217 10000 1000000000





*/