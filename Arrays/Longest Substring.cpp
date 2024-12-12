class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<int, int> mpp;
        int l=0,r=0;
        int len = 0, maxlen = 0;
        while(r<s.size()){
          
            if(mpp.find(s.at(r)) == mpp.end()){
                mpp[s.at(r)] = r;
                len = r-l+1;
                maxlen = max(len,maxlen);
                r++;
            }else{
                while(mpp.find(s.at(r))!=mpp.end()){
                    mpp.erase(s.at(l));
                    l++;
                }
            }
        }
        return maxlen;
    }
};
