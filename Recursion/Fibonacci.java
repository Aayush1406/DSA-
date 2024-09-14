package Recursion;

public class Fibonacci {

	public static void main(String[] args) {
		int ans = fibonacci(4);
		System.out.println("ans = "+ans);
	}
	
	static int fibonacci(int n) {
		if(n==1)
			return 1;
		if(n==0)
			return 0;
		return fibonacci(n-1)+fibonacci(n-2);
		
	}
}
