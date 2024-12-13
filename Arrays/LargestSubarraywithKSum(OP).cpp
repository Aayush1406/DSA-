int maxLen(vector<int>& arr) {

        map<int, int> mpp;
        int len = 0, maxlen = 0;
        int sum = 0, k = 0;
        
        mpp[0] = -1; 
        for(int i=0;i<arr.size();i++){
            
            sum +=arr[i];

            if(mpp.find(sum-k)!=mpp.end()){
                len = i - mpp[sum-k];

                maxlen = max(len,maxlen);
            }

            if(mpp.find(sum)==mpp.end()){
                mpp[sum] = i;
            }
            
        }
        
        return maxlen;
    }
