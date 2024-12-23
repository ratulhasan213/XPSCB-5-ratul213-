//https://codeforces.com/problemset/problem/1969/A
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
     vector<pair<int,int>>arr(n+1);
     int val;
     for (int i = 1; i <=n; i++)
     {
        cin>>val;
        arr[i] = make_pair(i,val);
     }

     if(n==2){
        cout<<2<<"\n";
     }
     else{

        bool two = false;
         
         for (int i = 1; i <=n; i++)
         {
            int index = arr[i].first;
            int num = arr[i].second;

            if(arr[num].second == index){
               two = true;
               break;
            }
         }

         if(two){
            cout<<2<<"\n";
         }
         else{
            cout<<3<<"\n";
         }
         
     }


     
   }
   

return 0;

}

/*

3
5
3 1 2 5 4
4
2 3 4 1
2
2 1


*/