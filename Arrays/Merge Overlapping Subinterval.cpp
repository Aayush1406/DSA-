// 1. sort the vector.
// 2. compare the 1st of i with the 0th of j and if they satisfy i=j;

#include<algorithm>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());  
        
        vector<vector<int>> vnew;

        for(int i=0;i<intervals.size();i++){

            int s = intervals[i][0];
            int e = intervals[i][1];
            
            for(int j=i+1;j<intervals.size();j++){

                if(e>=intervals[j][0]){
                    e = max(e, intervals[j][1]);
                    i = j;
                }else{
                    break;
                }

            }

            vnew.push_back({s,e});
        }
        return vnew;
    }
};
