package Recursion;

public class FirstUpperCaseInStr {

	public static void main(String[] args) {
		String str = "geEksforgeeKs";
		char ans = firstUpperCase(str);
		System.out.println(ans);
	}
	
	static char firstUpperCase(String s) {
		
		if(s.length()==0) {
			return '\0';
		}
		if(Character.isUpperCase(s.charAt(0))) {
			return s.charAt(0);
			
		}
		
		return firstUpperCase(s.substring(1));
		
	}
}
