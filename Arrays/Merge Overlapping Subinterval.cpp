class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v1;
        sort(intervals.begin(), intervals.end());

        for(int i=0;i<intervals.size();i++){

            int s = intervals[i][0];
            int e = intervals[i][1];

            for(int j=i+1;j<intervals.size();j++){

                if(e>=intervals[j][0]){
                    e = max(e,intervals[j][1]);
                    i=j;
                }
            }

            vector<int> v2 = {s,e};
            v1.push_back(v2);
        }

        return v1;
    }
};
