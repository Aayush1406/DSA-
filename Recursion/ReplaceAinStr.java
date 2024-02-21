package Recursion;

public class ReplaceAinStr {

	public static void main(String[] args) {
		String s = "aaaaabbfghaffa";
		String s_new = replace_2(s); 
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
	
	static String replace_2(String s) {
		
		if(s.length()==0) {
			return s;
		}
		
	
		if(s.charAt(0)=='a') {
			String new_str = s.substring(1);
			;
			return 'b' + replace_2(new_str);
		}
		else {
			
			char element = s.charAt(0);
			return element+replace_2(s.substring(1)); //slicing from 1st index
		}
		
		
	}
}
