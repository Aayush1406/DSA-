package TwoPointers;

public class MaxSubArray {

	public static void main(String[] args) {
		int[] a = {-1,2,3,4,6,3,4,9,6,1};
		int s = solver(a,4);
		System.out.println(s);
	}
	
	static int solver(int[] a, int k) {
		
		int l=0;
		int r = k-1;
		int sum = 0;
		for(int i=0;i<=r;i++) {
			sum = sum + a[i];
		}
		System.out.println(sum);
		int maxSum = Integer.MIN_VALUE;
		while(r<a.length-1) {
			
			sum = sum - a[l];
			l++;
			r++;
			sum = sum + a[r];
			if(maxSum<sum) {
				maxSum=sum;
			}
		}
		
		return maxSum;
	}
}
