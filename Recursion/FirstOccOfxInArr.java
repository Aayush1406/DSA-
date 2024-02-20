package Recursion;

public class FirstOccOfxInArr {

	public static void main(String[] args) {
		int[] a = {1,2,3,4,5,6,6,7,8,0,0,9,0};
		int x =9;
		int index = fstOccr(a,x,0);
		System.out.println("ans = "+index);
	}
	
	static int fstOccr(int[] a, int x, int si) {
		
		if(si==a.length-1) {
			if(a[si]==x) {
				return si;
			}
			return -1;
		}
		
		if(a[si]==x) {
			return si;
		}
		
		return fstOccr(a,x,si+1);
	}
}
