package Recursion;

import java.util.Arrays;

public class SumTriSrrsy {

	public static void main(String[] args) {

		int[] a = {1,2,3,4,5};
		printTriArray(a,a.length);
//		System.out.println(Arr);
	}
	
	static void printTriArray(int[] a,int n) {
		
		if(n==1) {
			System.out.println(Arrays.toString(a));
			return;
		}
		
		int[] temp_arr = new int[n-1];
		for(int i=0;i<temp_arr.length;i++) {
			temp_arr[i] = a[i] + a[i+1];
		}
		
		printTriArray(temp_arr, temp_arr.length);
		
		System.out.println(Arrays.toString(a));
		
	}

}

