class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int p1=0, p2 =0;
         vector<int> v;
        while(p1<m&&p2<n){

            if(nums1[p1]<nums2[p2]){
                v.push_back(nums1[p1]);
                p1++;
            }else{
                v.push_back(nums2[p2]);
                p2++;
            }

        }

        if(p1<m){
            while(p1<m){
                v.push_back(nums1[p1]);
                p1++;
            }
        }

        if(p2<n){
            while(p2<n){
                v.push_back(nums2[p2]);
                p2++;
            }
        }

        for(int i=0;i<m+n;i++){
            nums1[i] = v[i];
        }
    }
};
