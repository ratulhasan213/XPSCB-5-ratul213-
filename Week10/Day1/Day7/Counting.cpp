#include<bits/stdc++.h>
using namespace std;


void countRound(int arr[], int n){
    vector<pair<int,int>>v(n);
    for (int  i = 0; i < n; i++)
    {
        v[i].first = arr[i];
        v[i].second = i+1;
    }


    sort(v.begin(),v.end());

    int indx = -1;
    int ans = 0;
    for (int i = 0; i<n; i++)
    {
        if(v[i].second>indx){
            ans++;
        }

        indx = v[i].second;
    }

    cout<<ans<<"\n";
    
    
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

  int n;
  int arr[n];
  for (int i = 0; i <n; i++)
  {
    cin>>arr[i];
  }
  

   countRound(arr,n);

return 0;

}