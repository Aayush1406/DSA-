package Recursion;

import java.util.Arrays;

public class MinMaxNum {

	public static void main(String[] args) {
		int[] arr = {1,4,3,-5,8,49,90,0};
		int max = Integer.MIN_VALUE;
		int min = Integer.MAX_VALUE;
		int[] result_arr = new int[2];
		arr = minMaxNum(arr,arr.length, max, min, result_arr);
		System.out.println(Arrays.toString(result_arr));
	}
	
	static int[] minMaxNum(int[] a, int n, int max, int min, int[] result_arr) {
		
		if(n==1) {
			return a;
		}
		if(n==0) {
			return null;
		}
		
		if(a[n-1]>max) {
			max = a[n-1];
			result_arr[0] = max;
		}
		if(a[n-1]<min) {
			min = a[n-1];
			result_arr[1] = min;		
		}
		
		return minMaxNum(a, n-1, max, min, result_arr);
		
		
	}
}
