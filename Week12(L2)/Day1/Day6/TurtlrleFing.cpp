//https://codeforces.com/problemset/problem/1933/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const ll maxN = 1e6+10;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       ll a,b,l;
       cin>>a>>b>>l;

       vector<int>div;
       for (int i = 1; i*i <=l; i++)
       {
           if(l%i==0){
              div.push_back(i);
              if(i!=(l/i)){
                div.push_back(l/i);
               }
           }

           
       }

    //    for(int d: div){
    //     cout<<d<<" ";
    //    }

    //    cout<<"\n";


    vector<ll>arr;
    vector<ll>brr;

    for (int i = 0; i <21; i++)
    {
        ll t = pow(a,i);

        if(t>maxN){
            break;
        }
            arr.push_back(t);
        
    }

    for (int i = 0; i <21; i++)
    {
        ll t = pow(b,i);

        if(t>maxN){
            break;
        }
            brr.push_back(t);
        
    }



    // for(int x: arr){
    //     cout<<x<<" ";
    // }

    // cout<<"\n";


    // for(int x: brr){
    //     cout<<x<<" ";
    // }

    // cout<<"\n";



    int ans = 0;


    int lenA = arr.size();
    int lenB = brr.size();
    int lenDiv = div.size();

    for (int k = 0; k<lenDiv; k++)
     {
        bool canStop = false;
        for (int i = 0; i<lenA; i++)
        {
            for (int j = 0; j <lenB; j++)
            {
                
                ll temp = div[k]*arr[i]*brr[j];
                if(temp == l){
                    ans++;
                    canStop = true;
                    break;
                }
                 
            }

            if(canStop){
                break;
            }
            
        }

     }

  


    cout<<ans<<"\n";
       

   }
   

return 0;

}


/*

1
2 2 1024

11
2 5 20
2 5 21
4 6 48
2 3 72
3 5 75
2 2 1024
3 7 83349
100 100 1000000
7 3 2
2 6 6
17 3 632043



*/