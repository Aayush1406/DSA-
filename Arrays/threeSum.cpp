#include<bits/stdc++.h>

void twoSum(int t, int s, vector<int> &arr, set<vector<int>> &st){

    map<int, int> mpp;
    vector<int> tmp;
    for(int i=s;i<arr.size();i++){

        int x = t - arr[i];
        auto it = mpp.find(x);

        if(it == mpp.end()){
            mpp[arr[i]] = i;
        }else{
            tmp.push_back(x);
            tmp.push_back(-(t));
            tmp.push_back(arr[i]);
            sort(tmp.begin(),tmp.end());

            st.insert(tmp);
            tmp.clear();
        }
    }
}

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        int num = arr[i];

        int t = -(num);

        twoSum(t,i+1,arr,st);
    }

    vector<vector<int>> v(st.begin(),st.end());

    return v;
}
