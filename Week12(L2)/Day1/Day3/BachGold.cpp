//https://codeforces.com/problemset/problem/749/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   ll n;
   cin>>n;

   int len = __lg(n);

   vector<ll>arr;

   for (int i = 0; i <=len; i++)
   {
       if((1<<i) & n){
         arr.push_back(1);
       }
       else{
        arr.push_back(0);
       }
   }
    
    ll two = 0;
    bool odd = false;
    for (int i = 0; i <=len; i++)
    {
        if(arr[i]){
            ll t = (1<<i)/2;
            if(t==0){
                odd = true;
            }
            two+=t;
        }
    }

    if(odd){
        two--;
        if(two == 0){
           cout<<"1\n3\n";
        }
        else{
             cout<<two+1<<"\n";
           for (int i = 1; i <=two; i++)
           {
               cout<<"2 ";
           }
          cout<<"3\n";
        }
    
    }
    else{
       cout<<two<<"\n";
       for (int i = 1; i <=two; i++)
       {
          cout<<2<<" ";
       }
       cout<<"\n";
    }
  

return 0;

}