#include<bits/stdc++.h>
vector<int> findMissingRepeatingNumbers(vector < int > A) {
 
    map<int,int> mpp;
    for(int i=0;i<A.size();i++){
        
        mpp[A[i]]+=1;
    }
    int num;
    for(auto el:mpp){
        
        if(el.second == 2){
            num = el.first;
            break;
        }
    }
    
    int Asum = accumulate(A.begin(),A.end(),0);
    int max = A.size();
    int Msum = (max*(max+1))/2;
    int missing = Msum - Asum + num;


    vector<int> v;
    v.push_back(num);
    v.push_back(missing);
    
    return v;
    
}
