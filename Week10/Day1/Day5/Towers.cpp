//https://cses.fi/problemset/result/11687034/
#include<bits/stdc++.h>
using namespace std;

int buildTower(vector<int>arr){

    int n = arr.size();
    vector<int>ans;
    ans.push_back(arr[0]);
for (int i = 1; i <n; i++)
{  

    auto u = upper_bound(ans.begin(),ans.end(),arr[i]);
    if(u == ans.end()){
       ans.push_back(arr[i]);    
    }
    else{
        int ul = u - ans.begin();
        ans[ul] = arr[i];
    }

}
 

 return ans.size();

    
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

 
 int n;
 cin>>n;
 int val;
 vector<int>arr;
 for (int i = 0; i <n; i++)
 {
    cin>>val;
    arr.push_back(val);
 }
 


   cout<<buildTower(arr)<<"\n";


vector<int>a;
a.push_back(arr[0]);




 return 0;

}


/*

5
3 8 2 1 5

*/