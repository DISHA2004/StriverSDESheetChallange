#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &pr, int n)
{
    //  Write your code here.
    int in=-1;
    for(int i=n-2;i>=0;i--){
      if (pr[i] < pr[i + 1]) {
        in = i;
        break;
      }
    }
    for(int j=n-1;j>=in && in!=-1;j--){
        if(pr[in]<pr[j]){
            swap(pr[j],pr[in]);
            break;
        }
    }
    sort(pr.begin()+in+1,pr.end());
    return pr;
}