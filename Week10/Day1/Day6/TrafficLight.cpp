//https://cses.fi/problemset/task/1163
#include<bits/stdc++.h>
using namespace std;
void countGap(int arr[], int n, int x){

    set<int>st;
    multiset<int>mst;
    vector<int>ans;

    st.insert(0);
    st.insert(x);
    mst.insert(x-0);

    for (int i = 0; i <n; i++)
    {
        st.insert(arr[i]);
        auto it = st.find(arr[i]);
        int prVal = *prev(it);
        int nxVal = *next(it);

        mst.erase(mst.find(nxVal - prVal));
        mst.insert(nxVal - arr[i]);
        mst.insert(arr[i] - prVal);

        ans.push_back(*mst.rbegin());

    }


    for(int x: ans){
        cout<<x<<" ";
    }

    cout<<"\n";
    
    
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

 int n,x;
 cin>>x>>n;
  
  int arr[n];
  for (int i = 0; i <n; i++)
  {
    cin>>arr[i];
  }

  countGap(arr,n,x);


  
   

return 0;

}
/*

10 5
2 3 6 4 1

*/