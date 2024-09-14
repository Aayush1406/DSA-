package Recursion;

public class Print_1_to_n {

	public static void main(String[] args) {
		print_1_to_n(10);
		print_n_to_1(10);
	}
	
	static void print_1_to_n(int n) {
		
		if(n==0) {
			return;
		}
		print_1_to_n(n-1);
		System.out.println(n);
		return;
	
	}
	
	static void print_n_to_1(int n) {
		if(n==0) {
			return;
		}
		
		System.out.println(n);
		print_n_to_1(n-1);
	}
}
