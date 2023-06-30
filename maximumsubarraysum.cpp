#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
 
    */
    //kadane's algo 
    long long int s=0,m=INT_MIN;
    for(int i=0;i<n;i++){
        s+=arr[i];
        m=max(s,m);
        if(s<0) s=0;
    }
    if(m<0) return 0;
    return m;
}