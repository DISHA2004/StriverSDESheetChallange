#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>>ans(n);
  int i=0;
  while(i<n){
    ans[i].resize(i+1);
    ans[i][0]=ans[i][i]=1;
    for(int k=1;k<i;k++) ans[i][k]=ans[i-1][k-1]+ans[i-1][k];
    i++;
  }
  return ans;
}
