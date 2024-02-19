package Recursion;

public class Sum {

	public static void main(String[] args) {
		int ans = Sum(5);
		System.out.println("ans = "+ans);
	}
	
	static int Sum(int n) {
		
		if(n==0) {
			return 0;
		}
		
		return n + Sum(n-1);
	}
}
