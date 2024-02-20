package Recursion;

public class CheckNumInArray {

	public static void main(String[] args) {
		int[] a = {9,8,10,11,12,88};
		int x = 11;
		boolean flag = false;
		boolean ans1 = checkNumInArray_1(a, a.length-1,x,flag);
		System.out.println("ans1 = "+ans1);

		boolean ans2 = checkNumInArray_2(a, a.length-1,x);
		System.out.println("ans 2= "+ans2);
	}
	
	static boolean checkNumInArray_1(int[] a, int n, int x, boolean flag) {

		if(n==0) {
			if(flag==false&&a[n]==x) {
				
				return true;
			}
			return false;
		}
		
		if(a[n]==x) {
			flag = true;
			return true;
		}
		
		return checkNumInArray_1(a, n-1,x,flag);
	}
	
	static boolean checkNumInArray_2(int[]a, int n, int x) {
		
		if(n==0) {
			if(a[0]==x) {
				return true;
			}
			return false;
		}
		
		if(a[n]==x) {
			return true;
		}
		
		return checkNumInArray_2(a, n-1, x);	
			
	}
}
