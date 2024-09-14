package Recursion;

public class RemoveX {

	public static void main(String[] args) {
		
		String s = "xbxxbc";
		char c = 'x';
		String str = removeX_2(s);
		System.out.println("ans = "+str);
	}
	
	static String removeX(String s, int si) {
		
		if(si==s.length()) {
			return s;
		}
		
		if(s.charAt(si)=='x') {
			return s.replace("x","");
		}
		
		return removeX(s,si+1);
	}
	
	static String removeX_2(String s) {
		
		if(s.length()==0) {
			return s;
		}
		
		if(s.charAt(0)=='x') {
			String new_str = s.substring(1);
			return ""+ removeX_2(new_str);
		}
		
		char element = s.charAt(0);
		String new_str_2 = s.substring(1);
		return element + removeX_2(new_str_2);
	}
}
