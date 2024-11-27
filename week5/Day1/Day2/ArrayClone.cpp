//https://codeforces.com/problemset/problem/1665/B
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
    map<ll,int>cnt;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
        cnt[arr[i]]++;
    }
     
     int maxVal = -1;
     int occ = 0;
    for(auto[key,val]: cnt){
        if(val>occ){
            maxVal = key;
            occ = val;
        }
    }

    int ans = 0;
    int noneMax = (n-occ);

    while (occ<n)
    {
        ans++; // clone;
        
        
        if(noneMax>occ){
            ans+=occ; //swap
            noneMax-=occ;
            occ*=2;
        }
        else{

            ans+=noneMax; //swap
            occ+=noneMax;
        }
       
        
    }

    cout<<ans<<"\n";
    

    
 }
 
   

return 0;

}

/*


1
6
0 1 3 3 7 0



6
1
1789
6
0 1 3 3 7 0
2
-1000000000 1000000000
4
4 3 2 1
5
2 5 7 6 3
7
1 1 1 1 1 1 1


*/
