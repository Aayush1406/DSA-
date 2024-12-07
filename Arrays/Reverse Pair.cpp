class Solution {
public:
    int cnt = 0;
    int reversePairs(vector<int>& nums) {

        mergeSort(nums, 0, nums.size()-1);
        return cnt;
    }

    void countPairs(vector<int> &a, int s, int e, int mid) {
        int sls = s, els = mid, srs = mid + 1, ers = e;

        for (int i = sls; i <= els; i++) {
            while (srs <= ers && (long long)a[i] > 2 * (long long)a[srs]) {
                
                srs++;
                
            }

            cnt = cnt + srs - (mid+1);
        }
    }


void merge(vector<int> &a, int s, int e, int mid){

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

void mergeSort(vector<int> &a, int s, int e){

    if(s==e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    countPairs(a,s,e,mid);
    merge(a,s,e,mid);
}

};
