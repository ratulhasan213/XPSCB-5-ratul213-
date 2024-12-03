//https://codeforces.com/problemset/problem/1975/A
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[] , int s, int e){
 


 
    for (int i = s+1; i <=e; i++)
    {
        if(arr[i]<arr[i-1]){
       
            return false;
        }
    }

    return true;
    
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n;
       cin>>n;
       int arr[n];
       for (int i = 0; i <n; i++)
       {
            cin>>arr[i];
       }

      

       if(isSorted(arr,0,n-1)){
        cout<<"YES\n";
       }
       else{
           
                 int indx = 0;
                 int val = INT_MAX;


             for (int i = 0; i<n-1; i++)
              {
                if(arr[i]>arr[i+1]){

                   if(arr[i]<val){
                     val = arr[i];
                     indx = i;
                  }

               }

             }





        //        int indx = INT_MAX;

        //    for (int i = 0; i<n-1; i++)
        //       {
        //         if(arr[i]>arr[i+1]){

        //            indx = min(i,indx);

        //        }

        //      }


      

             int newArr[n];
               
               int j = 0;
              for (int i = indx+1; i <n; i++)
             {
                newArr[j] = arr[i];
                j++;
             }
             

             for (int i = 0; i <=indx; i++)
             {
                newArr[j] = arr[i];
                j++;
             }

            
           
        
           if(isSorted(newArr,0,n-1)){
            cout<<"YES\n";
           }
           else{
            cout<<"NO\n";
           }
                  
                
       }

      
       
       
   }
   

return 0;

}

/*
1
5
7 9 2 2 3


3
6
1 1 4 5 1 4
5
7 9 2 2 3
3
1 2 3





    for (int i = 0; i <n; i++)
            {
                cout<<newArr[i]<<" ";
            }
            
             
           cout<<"\n";


       //  cout<<indx<<" "<<val<<"\n";

       //  cout<<s<<" "<<e<<"\n";

*/

