class Solution {
public:
    int cnt = 0;
    int reversePairs(vector<int>& nums) {
        
        mergesort(nums,0,nums.size()-1);
        return cnt;
    }

    void mergesort(vector<int> &nums, int s, int e){

        if(s>=e){
            return;
        }

        int mid = (s+e)/2;
        mergesort(nums, s, mid);
        mergesort(nums, mid+1, e);
        countPairs(nums,s,e,mid);
        merge(nums, s, e, mid);
    }

    void countPairs(vector<int> &nums, int s, int e, int mid){
        int p1 = s, els = mid, p2 = mid+1, ers = e;

        while(p1<=els && p2<=ers){

            if(nums[p1]>(long long)2*nums[p2]){
                cnt += mid - p1 + 1;
                p2++;
            }else{

                p1++;
            }
        }
    }

    void merge(vector<int> &nums, int s, int e, int mid){

        int sizels = mid-s+1, sizers = e-(mid+1) +1;
        int ls[sizels], rs[sizers];
        int sls = s, srs = mid+1;
        for(int i=0;i<sizels;i++){
            ls[i] = nums[sls];
            sls++;
        }

        for(int i=0;i<sizers;i++){
            rs[i] = nums[srs];
            srs++;
        }

        int p1 = 0, p2 = 0, index = s;

        while(p1<sizels && p2<sizers){
            if(ls[p1]<rs[p2]){
                nums[index] = ls[p1];
                p1++;
                index++;
            }else{
                nums[index] = rs[p2];
                p2++;
                index++;
            }
        }

        if(p1<sizels){
            while(p1<sizels){
                nums[index] = ls[p1];
                p1++;
                index++;
            }
        }

        if(p2<sizers){
            while(p2<sizers){
                nums[index] = rs[p2];
                p2++;
                index++;
            }
        }
        
    }
};
