#include <bits/stdc++.h> 
long long merge(long long a[], int s, int mid, int e){

    int sizels = mid-s+1;
    int sizers = (e-(mid+1)+1);
    int ls[sizels] ,rs[sizers];
    int pls = s, prs = mid+1;

    long long cnt = 0;
    for(int i=0;i<sizels;i++){
        ls[i] = a[pls];
        pls++;
    }

    for(int i=0;i<sizers;i++){
        rs[i] = a[prs];
        prs++;
    }
    int p1 = 0, p2 = 0, index = s;
    while(p1<sizels && p2<sizers){
        if(ls[p1]<rs[p2]){
            a[index] = ls[p1];
            index++;
            p1++;
            
        }else{
            a[index] = rs[p2];
            cnt += (sizels - p1);
            index++;
            p2++;
            
        }
    }
    if(p1<sizels){
        while(p1<sizels){
            a[index] = ls[p1];
            p1++;
            index++;
        }
    }
    if(p2<sizers){
        while(p2<sizers){
            a[index] = rs[p2];
            p2++;
            index++;
        }
    }

    return cnt;
}

long long mergesort(long long a[],int s, int e){
    long long cnt = 0;
    if(s==e){
        return cnt;
    }

    int mid = (s+e)/2;

    cnt += mergesort(a,s,mid);
    cnt += mergesort(a,mid+1,e);
    cnt += merge(a,s,mid,e);

    return cnt;
}

long long getInversions(long long *arr, int n){
    
    return (long long)mergesort(arr,0,n-1);
}

