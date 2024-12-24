//https://codeforces.com/problemset/problem/1823/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
     int n,k;
     cin>>n>>k;
     int arr[n+1];
     set<int>st;
     map<int,set<int>>cnt;
     for (int i = 1; i <=n; i++)
     {
        cin>>arr[i];
        st.insert(arr[i]);
        int key = i%k;
        if(key == 0){
           cnt[k].insert(i);
        }
        else{
            cnt[key].insert(i);
        }
     }

    
    // for(auto key: cnt){
    //     int bucket = key.first;
    //     auto s = key.second;
    //     cout<<bucket<<"->: ";
    //     for(auto x: s){
    //         cout<<x<<" ";
    //     }

    //     cout<<"\n";
    // }


    int indx = 1;
    int count = 0;
    for(int val: st){
        if(arr[indx]!=val){
            int key = indx%k;
            if(key == 0){
                key = k;
            }
            if(!cnt[key].count(arr[indx])){
                count++;
            }
        }
        indx++;
    }


    if(count==0){
        cout<<"0\n";
    }
    else if(count==2){
        cout<<"1\n";
    }
    else{
        cout<<"-1\n";
    }


     
   }
   

return 0;

}

/*

1
10 3
4 5 9 1 8 6 10 2 3 7



6
4 1
3 1 2 4
4 2
3 4 1 2
4 2
3 1 4 2
10 3
4 5 9 1 8 6 10 2 3 7
10 3
4 6 9 1 8 5 10 2 3 7
10 3
4 6 9 1 8 5 10 3 2 7


*/