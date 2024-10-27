#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}

int start = 0;
int end = n-1;
int sreja = 0;
int dima = 0;

bool s = true;
bool d = false;
while (start<=end)
{
    if(s){
             if (arr[start]>arr[end])
         {
        sreja+=arr[start];
        start++;
        }
        else{
        sreja+=arr[end];
         end--;
        }
    }

    if (d)
    {
          if (arr[start]>arr[end])
         {
        dima+=arr[start];
        start++;
        }
        else{
        dima+=arr[end];
        end--;
        }
    }
    
  
    s=!s;
    d=!d;
}

cout<<sreja<<" "<<dima<<"\n";




return 0;

}