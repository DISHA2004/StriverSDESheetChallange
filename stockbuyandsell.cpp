#include <bits/stdc++.h> 
int maximumProfit(vector<int> &pr){
    // Write your code here.
    int cp=INT_MAX, mp=INT_MIN;
    for(int i=0;i<pr.size();i++){
        cp=min(cp,pr[i]);
        mp=max(mp, pr[i]-cp);
    }
    return  mp;
}