package Recursion;

public class ArraySum {

	public static void main(String[] args) {
		int[] a = {1,2,3,4,5};
		int sum=0,i=0;
		int ans1 =sumArray_1(a,sum,i);
		System.out.println("ans 1= "+ans1);
		int ans2 =sumArray_2(a,i);
		System.out.println("ans 2= "+ans2);
		int ans3 =sumArray_3(a,a.length-1);
		System.out.println("ans 3= "+ans3);
	}
	
	static int sumArray_1(int[] a, int sum, int i) {
		
		if(i==a.length) {
			return sum;
		}
		
		sum = sum + a[i];
		i++;
	    return sumArray_1(a,sum,i);
		
	}
	
	static int sumArray_2(int[] a, int i) {
		
		if(i==a.length) {
			return 0;
		}
		
		return a[i] + sumArray_2(a,i=i+1);
	}
	
	static int sumArray_3(int[] a, int n) {
		
		if(n==0) {
			return a[0];
		}
		
		return a[n] + sumArray_3(a,n-1);
	}
}
