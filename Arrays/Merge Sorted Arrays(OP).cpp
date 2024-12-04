class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int p1 = m-1, p2 = 0;

        while(p1>=0 && p2<n){

            if(nums1[p1]>nums2[p2]){
                swap(nums1[p1],nums2[p2]);
                p1--;
                p2++;
            }else{

            p1--;
            p2++;
            }
        }

        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.begin()+n);

        for(int el: nums1){
            cout<<el;
        }
        cout<<endl;
        for(int el: nums2){
            cout<<el;
        }

        int idx = 0;
        for(int i=m;i<m+n;i++){
            nums1[i] = nums2[idx];
            idx++;
        }
    }
};
