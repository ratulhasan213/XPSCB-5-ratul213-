//https://codeforces.com/problemset/problem/1144/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   int arr[n];
   ll sum = 0;
   priority_queue<int>even;
   priority_queue<int>odd;
   
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
      sum+=arr[i];
      if(arr[i]%2==0){
          even.push(arr[i]);
      }

      if(arr[i]%2==1){
        odd.push(arr[i]);
      }

   }

         priority_queue<int>oddCopy = odd;
         priority_queue<int>evenCopy = even;
           bool f1 = true;
           ll firstTry = sum; // even

           while (!even.empty() || !odd.empty())
           {
               if(f1){
                 
                 if(even.empty()){
                    break;
                 }
                  firstTry-=even.top();
                  even.pop();
               }
               else{
                 if(odd.empty()){
                    break;
                 }
                firstTry-=odd.top();
                odd.pop();
               }

               f1 = !f1;
           }

          
           
       
    
            // maxOdd>maxEven
            bool f2 = true;
            ll secondTry = sum; // odd
           while (!evenCopy.empty() || !oddCopy.empty())
           {
               if(f2){
                 if(oddCopy.empty()){
                    break;
                 }
                  secondTry-=oddCopy.top();
                  oddCopy.pop();
               }
               else{
                 if(evenCopy.empty()){
                    break;
                 }
                  secondTry-=evenCopy.top();
                  evenCopy.pop();
               }

               f2 = !f2;
           }

           cout<<min(firstTry,secondTry)<<"\n";

       
   

  


   

return 0;

}



/*


5
1 5 7 8 2


6
5 1 2 4 6 3


2
1000000 1000000



*/