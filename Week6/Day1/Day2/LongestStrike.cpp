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
       int n,k;
       cin>>n>>k;
       ll val;
        map<ll,int>cnt;
       for (int i = 0; i<n; i++)
       {
          cin>>val;
          cnt[val]++;
       }

    
             vector<ll>arr;
           for(auto[key,val]: cnt){
           
                  if(val>=k){
                      arr.push_back(key);
                  }
          
             }   


       
                if(arr.size() == 0){
                    cout<<"-1\n";
                }
                else{

                    int len = arr.size();

                    int start = 0;
                    int end = 1 ;

                 

                    ll fs = arr[start];
                    ll fe = arr[start];

                    ll fc = -1;
                    ll tc = 0;

                    while (end<len)
                    {
                           if(arr[end] - arr[end-1] == 1){
                            tc = (end-start+1);
                                if(tc>fc){
                                   fs = arr[start];
                                   fe = arr[end];
                                   fc = tc;
                               }
                          }
                          else{
                              start = end;
                          }

                            end++;
                    }

            
                        cout<<fs<<" "<<fe<<"\n";
                    
                } 

       }

    
    return 0;
       
   }
   






/*

1
1 1
1

1
18 2
2 2 5 5 7 7 8 8 9 9 11 12 11 12 13 13 14 14

1
14 2
1 1 2 2 2 3 3 3 3 4 4 4 4 4



4
7 2
11 11 12 13 13 14 14
5 1
6 3 5 2 1
6 4
4 3 4 3 3 4
14 2
1 1 2 2 2 3 3 3 3 4 4 4 4 4



        cout<<"\n\n";
        for(int x: v){
            cout<<x<<" ";
        }

        cout<<"\n\n";


*/