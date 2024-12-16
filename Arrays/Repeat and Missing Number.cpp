#include<bits/stdc++.h>
vector<int> findMissingRepeatingNumbers(vector < int > A) {

//1. Optimal
#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> A) {
    int n = A.size();
    
    long long sr = (long long)n * (n+1)/2;
    long long sg = 0;

    for(int el:A){
        sg+=el;
    }

    long long sr2 = (long long)n * (n+1) * (2*n+1)/6;
    long long sg2 = 0;

    for(int el:A){
        sg2 += (long long)el * (long long)el;
    }

    long long val1 = sr-sg;
    long long val2 = sr2 - sg2;

    long long val1_new = val2/val1;

    long long missing = (val1_new + val1)/2;

    long long repeat =  missing - val1;

    vector<int> v = {(int)repeat, (int)missing};

    return v;

 -----------------------------------------------------------------------------------
 //2. Not Optimal
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
