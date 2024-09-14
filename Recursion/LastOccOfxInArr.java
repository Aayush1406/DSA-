package Recursion;

public class LastOccOfxInArr {

	public static void main(String[] args) {
		
		int[] a = {1,2,3,4,4,5,67,4,5,6,7};
		int x = 1;
		int index = lstOcc(a,a.length-1,x);
		System.out.println("ans = "+index);
	}
	
	static int lstOcc(int[]a, int n, int x) {
		
		if(n==0) {
			if(a[n]==x) {
				return 0;
			}
			return -1;
		}
		
		if(a[n]==x) {
			return n;
		}
			
		
	    return lstOcc(a,n-1,x);
	}
}
