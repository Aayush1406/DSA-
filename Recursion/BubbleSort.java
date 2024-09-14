package Recursion;

import java.util.Arrays;

public class BubbleSort {

	public static void main(String[] args) {
	
		int[] a = {5,4,3,2,1};
		int[] ans = bubbleSortRec(a,a.length);
		System.out.println(Arrays.toString(ans));
		
		int[] ans2 = bubbleSortIter(a,a.length);
		System.out.println(Arrays.toString(ans2));
	}
	
	static int[] bubbleSortRec(int[] a, int n) {
		
		if(n==0) {
			return a;
		}
		
		for(int i =0;i<n-1;i++) {
			if(a[i]>a[i+1]) {
				swap(a,i,i+1);
			}
		}
		
		return bubbleSortRec(a,n-1);
	}
	
	static int[] swap(int[]a, int x, int y) {
		
		int temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		
		return a;
	}
	
	static int[] bubbleSortIter(int[] a, int n) {
		
		for(int i=0;i<n-1;i++) {
			
			for(int j=i+1;j<n;j++) {
				if(a[i]>a[j]) {
					swap(a,i,j);
				}
			}
		}
		
		return a;
	}
}
