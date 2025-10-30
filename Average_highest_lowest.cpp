#include<bits/stdc++.h>

using namespace std;

int main()
{
  int arr[4]={39,40,35,36};
  int size=4;
  int avg=0,high=0,low=100;
  
  for(int i=0;i<size;i++)
  {
    avg=avg+arr[i];
    if(high<arr[i])
    {
      high=arr[i];
    
    }
    
    if( low>arr[i])
    {
      low=arr[i];
    
    }
  }
    avg=avg/4;
  cout<<avg<<endl;
   cout<<high<<endl;
      cout<<low<<endl;
  
  
 
  
  
}
