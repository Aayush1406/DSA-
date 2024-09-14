package Recursion;

public class LengthOfStr {

	public static void main(String[] args) {
		String str = "Aayush";
		int count = 0;
		int ans = calculateLen(str,count);
		System.out.println("ans = "+ans);
	}
	
	static int calculateLen(String str, int count) {
		
		if(str.equals("")) {
		
			return count;
		}
		
		count++;
		return calculateLen(str.substring(1), count); // 0,1,2,3,4,5
	}
}
