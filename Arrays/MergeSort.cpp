#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int s, int e, int mid){

    int sls = s, els = mid, srs = mid+1, ers = e;

    int sizels = els-sls+1;

    int sizers = ers - srs + 1;

    int ls[sizels], rs[sizers];

    int index = s;

    for(int i=0;i<sizels;i++){

        ls[i] = a[sls+i];
    }

    for(int i=0;i<sizers;i++){

        rs[i] = a[srs+i];
    }

    int pls=0, prs=0, pa=s;

    while(pls<sizels && prs<sizers){
        if(ls[pls]<rs[prs]){
            a[pa] = ls[pls];
            pa++;
            pls++;
        }else{
            a[pa] = rs[prs];
            pa++;
            prs++;            
        }
    }

    if(pls<sizels){
        while(pls<sizels){
            a[pa] = ls[pls];
            pa++;
            pls++;
        }
    }    

    if(prs<sizers){
        while(prs<sizers){
            a[pa] = rs[prs];
            pa++;
            prs++;
        }
    }    

}

void mergeSort(int a[], int s, int e){

    if(s==e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    merge(a,s,e,mid);
}

int main(){

    int a[] = {2,4,3,5,1};

    mergeSort(a, 0, 4);

    for(int el:a){
        cout<<el<<endl;
    }

    return 0;

}
