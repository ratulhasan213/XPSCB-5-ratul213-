//https://www.codechef.com/problems/MOONSOON
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 



   int test;
   cin>>test;
   while (test--)
   {
        int n,m,h;
        cin>>n>>m>>h;

    

        ll car[n];
        ll pow[m];
        for (int i = 0; i <n; i++)
        {
            cin>>car[i];
        }

        for (int i = 0; i <m; i++)
        {
            cin>>pow[i];
            pow[i] = pow[i]*h;
        }


        sort(car,car+n,greater<ll>());
        sort(pow,pow+m,greater<ll>());


        int c = 0;
        int p = 0;
        ll ans = 0;
        while (c<n && p<m)
        {
            int temp = pow[p]*h;
        

           ans+= min(pow[p],car[c]);
            c++;
            p++;
        }
        
        
        cout<<ans<<"\n";
        
   }
   
   

   

return 0;

}
