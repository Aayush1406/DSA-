package TwoPointers;

public class LongestSubArray {

	public static void main(String[] args) {
		int[] a = {2,2,1,1,10};
		int ans = solver(a,a.length,14);
		System.out.println(ans);
	}
	
	static int solver(int[] a, int n, int k) {
		
		int l=0, r=0, sum=0, maxLen=0;
		
		while(r<n) {
			
			sum = sum + a[r];
			
			if(sum<k) {
				maxLen = Math.max(maxLen, r-l+1);
				r++;
			}else {
				sum = sum - a[l];
				l++;
				r++;
			}
		
		}
		
		
		return maxLen;
	}
}
