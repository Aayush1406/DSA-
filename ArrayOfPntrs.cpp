#include<iostream>

using namespace std;

int findMax(int** p, int* s, int c){
    int max = -1;
    for(int i=0;i<c;i++){
        for(int j=0;j<s[i];j++){
            if(max<p[i][j]){
                max = p[i][j];
            }
        }
    }

    return max;
}

int main(){

    int* p[3];
    int a[] = {11,12,13,14};
    int b[] = {15, 100, 17, 18};
    int c[] = {19,20,21,22};

    p[0] = a;
    p[1] = b;
    p[2] = c;
    int n = 3;
    int size[] = {4,4,4};
    int ans = findMax(p,size,n);

    cout<<ans;
    return 0;
}