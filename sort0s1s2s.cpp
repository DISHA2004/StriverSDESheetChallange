#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //Dutch national flag algorithm
   //   Write your code here
   int low=0,high=n-1,mid=0;
   while(mid<=high){
      if(arr[mid]==0){
         swap(arr[mid],arr[low]);
         low++;
         mid++;
      }
      else if(arr[mid]==1){
         mid++;
      }
      else {
         swap(arr[high],arr[mid]);
         high--;
      }
   }
}