#include<bits/stdc++.h>

using namespace std;

void changearr(int arr[],int size)
{
  cout<<"In function"<<endl;
  for(int i=0;i<size;i++)
  {
     
    arr[i]=arr[i]*2;
  }
}
int main()
{
  int arr[]={1,2,3};
  
  changearr(arr, 3);
   cout<<"In main"<<endl;
  for(int i=0;i<3;i++)
  {
    
     cout<<arr[i]<<endl;
  }
  
  return 0;
}
