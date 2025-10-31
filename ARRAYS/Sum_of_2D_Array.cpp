#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[][3] = { {10, 2, 6}, {11, 7, 8}, {4, 1, 0}, {21, 37, 100} };
    int sum=0;
    int row = sizeof(arr) / sizeof(arr[0]);
    int column = sizeof(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
          sum+=arr[i][j];
       
        }
  
    }
          cout <<sum<< endl;

    return 0;
}
