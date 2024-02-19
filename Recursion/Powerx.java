package Recursion;
//Leetcode Q. 50
public class Powerx {

	public static void main(String[] args) {
		double ans  = doublePaw(2, 5);
		System.out.println(ans);
	}
	
	static double doublePaw(double x, long n) {
		
		return solver(x,n);
	}
	
	static double solver(double x, long n) {
		if(n==0) {
			return 1;
		}
		if(n<0) {
			return solver(1/x, n=-n);
		}if(n%2==0) {
			return solver(x*x,n/2);
		}
		return x*solver(x*x,(n-1)/2);
	}
}
