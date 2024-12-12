#include<vector>
#include<bits/stdc++.h>
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	
	map<int, int> mpp;
	mpp[0]=-1;
	int sum = 0, k=0,len=0,maxlen=0;
	for(int i=0;i<arr.size();i++){

		sum +=arr[i];

		if(sum==k){
			len = i - mpp[0];
			maxlen = max(len,maxlen);
		}else if(mpp.find(sum-k)==mpp.end()){
			mpp[sum] = i;
		}else{
			len = i - mpp[sum-k];
			maxlen  = max(len,maxlen);
		}
		

	}

	return maxlen;
}
