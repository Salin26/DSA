#include<bits/stdc++.h>

using namespace std;

int main()
{
  int arr[8]={2,10,20,30,6,7,0,0};
  int pos=2;
  int n=7;
  
  for(int i=pos;i<n;i++)
  {
    arr[i]=arr[i+1];
  }
  
   for(int i=0;i<8;i++)
  {
    cout<<arr[i]<<" ";
  }
  
}
