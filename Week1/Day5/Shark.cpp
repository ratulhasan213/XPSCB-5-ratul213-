#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

    int evenNum=0;
    int oddNum=0;
   long long int evenSum = 0;
   long long int oddSum = 0;
   int n;
   cin>>n;
   
   long long int num;
   long long int minOdd = 1e12;
   for (int i = 0; i <n; i++)
   {
       cin>>num;
       if(num%2==0){
          evenNum++;
          evenSum+=num;
       }
       else{
        oddNum++;
        oddSum+=num;
        minOdd = min(minOdd,num);
       }
   }
    

   if(oddNum%2==0){
    cout<<evenSum+oddSum;
   }
   else{
    cout<<evenSum+oddSum-minOdd;
   }
   


return 0;

}