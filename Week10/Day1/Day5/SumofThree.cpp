//https://cses.fi/problemset/task/1641/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void countDistinctValues(ll arr[], ll x, int n){


    map<ll,deque<ll>>cnt;
    for (int i = 0; i <n; i++)
    {
        cnt[arr[i]].push_back(i+1);
    }
    
    
    sort(arr,arr+n);

    for (int i = 0; i <n; i++)
    {
        ll need = x - arr[i];
        int fi = cnt[arr[i]].front();
        cnt[arr[i]].pop_front();

        int start = i+1;
        int end = n-1;

        while (start<end)
        {
           ll sum = arr[start] + arr[end];
             if(sum == need){
                int si = cnt[arr[start]].front();
                cnt[arr[start]].pop_front();
                int ti = cnt[arr[end]].front();
                cout<<fi<<" "<<si<<" "<<ti<<"\n";
                  return; 
            }
            else if(sum>need){
                end--;
            }
            else{
                start++;
            }
        }
        

    }

    cout<<"IMPOSSIBLE\n";
    


}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   ll x;
   cin>>n>>x;
   ll arr[n];
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }


   countDistinctValues(arr,x,n);
   
   

return 0;

}

/*


7 3
2 1 1 2 2 1 1

*/