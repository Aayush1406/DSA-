package Recursion;

public class PowerOfTwo {

	public static void main(String[] args) {
		int n = Integer.MAX_VALUE;
		int x = 3;
		boolean ans  = isPowerOfX(n, x);
		System.out.println("ans = "+ans);
	}

	static boolean isPowerOfX(int n, int x) {
		
		if(n==1) {
			return true;
		}
		if(n==0) {
			return false;
		}
		if(n%x!=0) {
			return false;
		}
		
		return isPowerOfX(n/x,x);
		
	}

}

