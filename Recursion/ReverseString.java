package Recursion;

public class ReverseString {

	public static void main(String[] args) {
	
		String s1 = "aayush";
		String s2="";

		String str = reverseString(s1,s2,s1.length()-1);
		System.out.println(str);
	}
	
	static String reverseString(String s1, String s2, int n) {
		
		if(n==-1) {
			return s2;
		}
		
		s2 = s2+s1.charAt(n);
		
		return reverseString(s1,s2,n-1);
	}
}
