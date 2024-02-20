package Recursion;

public class ReplaceAinStr {

	public static void main(String[] args) {
		String s = "aaaaabbfghaffa";
		String s_new = replace(s,'a','b',0); 
		System.out.println("ans = "+s_new);
	}
	
	static String replace(String s, char a, char b, int si) {
		
		if(si==s.length()) {
			return s;
		}
		
		if(s.charAt(si)=='a') {
			s = s.replace(a, b);
			return replace(s,a,b,si+1);
		}
		
		return replace(s,a,b,si+1);
	}
}
