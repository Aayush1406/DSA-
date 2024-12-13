#include<bits/stdc++.h>
int subarraysWithSumK(vector<int> v, int b) {

    int cnt = 0;
    map<int,int> mpp;
    mpp[0] = 1;
    int xr = 0;

    for(int i=0;i<v.size();i++){

        xr = xr ^ v[i];
        int x = b ^ xr;
        
         mpp[xr]++;

        if(mpp.find(x)!=mpp.end()){
            cnt = cnt + mpp[x];
        }
        
    }

    return cnt;
}
