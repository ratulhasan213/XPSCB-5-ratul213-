//https://codeforces.com/problemset/problem/1935/A
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
       string s;
       cin>>s;
       string r = s;
       reverse(r.begin(),r.end());

        if(s<=r){
            cout<<s<<"\n";
        }        
        else{
            cout<<r<<s<<"\n";
        }
   }
   

return 0;

}

/*

5
4
cpm
2
grib
10
kupitimilablodarbuz
1000000000
capybara
6
abacaba


*/