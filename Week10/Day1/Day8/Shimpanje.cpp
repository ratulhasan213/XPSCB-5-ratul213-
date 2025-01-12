#include<bits/stdc++.h>
using namespace std;

int greaterThanX(int arr[], int n, int x){
    int ans = -1;
    
     int start = 0;
     int end = n-1;
     while (start<=end)
     {
        int mid = start+(end-start)/2;

        if(arr[mid]<=x){
            start = mid+1;
        }else{
            ans = arr[mid];
            end = mid-1;
        }
        
     }
     

    return ans;
}


int smallerThanX(int arr[], int n, int x){
     int ans = -1;
    
     int start = 0;
     int end = n-1;
     while (start<=end)
     {
        int mid = start+(end-start)/2;

        if(arr[mid]<x){
            ans = arr[mid];
            start = mid+1;
        }else{
            
            end = mid-1;
        }
        
     }
     

    return ans;



}




int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

    int n;
    cin>>n;
    int girlsHeight[n];
    for (int i = 0; i <n; i++)
    {
        cin>>girlsHeight[i];
    }


    int q;
    cin>>q;

    int query[q];
    for (int i = 0; i <q; i++)
    {
        cin>>query[i];
    }


    for (int i = 0; i <q; i++)
    {
       int smaller = smallerThanX(girlsHeight,n,query[i]);
       int greater = greaterThanX(girlsHeight,n,query[i]);

     smaller == -1 ? cout<<"X " : cout<<smaller<<" ";
     greater == -1 ? cout<<"X\n": cout<<greater<<"\n";

    }
    

return 0;

}


/*


4
1 4 5 7
4
4 6 8 10

*/