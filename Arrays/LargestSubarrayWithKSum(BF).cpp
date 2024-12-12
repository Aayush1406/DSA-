class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int sum = 0, len = 0, maxlen = 0;
        for(int i=0;i<arr.size();i++){
            len = 0, sum = 0;
            for(int j=i;j<arr.size();j++){
                sum = sum + arr[j];
                
                if(sum==0){
                    len = j-i+1;
                    maxlen = max(len,maxlen);
                    len = 0;
                }
            }    
        }
        
        return maxlen;
    }
};
