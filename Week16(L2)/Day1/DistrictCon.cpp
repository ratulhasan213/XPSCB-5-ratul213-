//https://codeforces.com/problemset/problem/1433/D
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

      map<int,vector<int>>cnt;
      int val;
      for (int i = 1; i <=n; i++)
      {
         cin>>val;
         cnt[val].push_back(i);
      }


    //   for(auto[key, arr]: cnt){
    //     cout<<key<<" -> ";
    //     for(auto x: arr){
    //         cout<<x<<" ";
    //     }
    //     cout<<"\n";
    //   }


    if(cnt.size()==1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";

     int firstval = cnt.begin()->first;

     int f = cnt[firstval].front();
     int last;

    //  cout<<f<<"\n";

    int indx = 0;
    for(auto it = cnt.begin(); it!=cnt.end(); ++it){
        if(indx == 0){
            indx++;
            continue;
        }

        int temp = it->first;
        for(auto x: cnt[temp]){
            cout<<f<<" "<<x<<"\n";
            last = x;
        }
        
    }


    vector<int>arr = cnt.begin()->second;

    for (int i = 1; i<arr.size(); i++)
    {
        cout<<last<<" "<<arr[i]<<"\n";
    }


  }
    
    

   }
   

return 0;

}


/*


1
5
1 2 2 1 3

1
4
1 1000 101 1000


1
4
1 2 3 4


4
5
1 2 2 1 3
3
1 1 1
4
1 1000 101 1000
4
1 2 3 4



*/