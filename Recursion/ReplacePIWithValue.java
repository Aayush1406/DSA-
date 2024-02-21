package Recursion;

public class ReplacePIWithValue {

	public static void main(String[] args) {
		String s = "ppiapippibp";
		String ans = replacePI(s);
		System.out.println("ans = "+ans);
	}
	
	static String replacePI(String s) {
		
		if(s.length()==0||s.length()==1) {
			return s;
		}
		
		if(s.charAt(0)=='p'&& s.charAt(1)=='i') {
			String new_str = s.substring(2);
			return "3.14"+replacePI(new_str);
		}
		
		char element = s.charAt(0);
		return element+replacePI(s.substring(1));
	}
}
