//https://codeforces.com/problemset/problem/1332/B
#include<bits/stdc++.h>
using namespace std;


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   //calcualting first 11 prime by sieve:
   int n = 40;

   vector<bool>nums(n+1,true);

   for (int i = 2; i*i <=n; i++)
   { 
      if(nums[i]){
           for (int j = i*2; j<=n; j+=i)
         {
            nums[j] = false;
         }
      }  
       
   }


//       for (int i = 2; i <=n; i++)
//    {
//         if(nums[i]){
//             cout<<i<<" ";
//         }
//    }
//    cout<<"\n";



   int test;
   cin>>test;
   while (test--)
   {
      int len;
      cin>>len;
      int arr[len];
       for (int i = 0; i<len; i++)
       {
          cin>>arr[i];
       }



    //    for (int i = 0; i <len; i++)
    //    {
    //       cout<<indx[arr[i]]<<"\n";
    //    }
       

         
vector<bool>mark(len,false);

map<int,vector<int>>cnt;


for(int i = 2;i<=n;i++){
    
    if(nums[i]){
        for (int j = 0; j<len; j++)
      {
        if(!mark[j] && arr[j]%i == 0){
            mark[j] = true;
            cnt[i].push_back(j);
        }
       }
       
       
      
    }
  
}


vector<int>ans(len);
int c = 1;
for(auto[key,number]: cnt){
   
   for(int x: number){
       ans[x] = c;
   }
   c++;
}

  cout<<cnt.size()<<"\n";
  for(int a: ans){
    cout<<a<<" ";
  }

  cout<<"\n";

       
   }
   


   

return 0;

}



/*


1
23
437 519 865 808 909 391 194 291 237 395 323 365 511 497 781 737 871 559 731 697 779 841 961




3
3
6 10 15
2
4 9
23
437 519 865 808 909 391 194 291 237 395 323 365 511 497 781 737 871 559 731 697 779 841 961



*/