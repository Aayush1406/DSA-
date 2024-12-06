#include <iostream>
#include <map>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int start, int end, int mid){

    int ps1 = start, pe1 = mid; // start and end of the left sub arr.

    int size1 = pe1 - ps1 +1; // size of ls

    int ps2 = mid+1, pe2 = end; // start and end of the right sub arr.

    int size2 = pe2 - ps2 +1; // size of rs

    int index = start;

    int ls[size1];
    int rs[size2];

    for(int i=0;i<size1;i++){
        ls[i] = a[ps1+i];
    }

    for(int i=0;i<size2;i++){
        rs[i] = a[ps2+i];
    }

    int p1 = 0, p2 = 0;
    int k = ps1;
    while(p1<size1&&p2<size2){

        if(ls[p1]<rs[p2]){
            a[k] = ls[p1];
            p1++;
            k++;
        }else{
            a[k] = rs[p2];
            p2++;
            k++;
        }
    }

    if(p1<size1){
        while(p1<size1){
            a[k] = ls[p1];
            k++;
            p1++;
        }
    }

    if(p2<size2){
        while(p2<size2){
            a[k] = rs[p2];
            k++;
            p2++;
        }
    }

}

void mergeSort(int a[], int start, int end){

    if(start == end){
        return;
    }

    int mid = (start + end)/2;

    mergeSort(a, start, mid);
    mergeSort(a, mid+1, end);
    merge(a,start,end,mid);

}

int main() {

    int a[7] = {5,4,3,2,1,1,1};
    mergeSort(a,0,6); 

    for(int el:a){
        cout<<el<<endl;
    }
}
