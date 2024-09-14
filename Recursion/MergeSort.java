package Recursion;

import java.util.Arrays;

public class MergeSort {

	public static void main(String[] args) {
		int[] a = {10,9,8,7,6,5,4,3,2,1};
		int si=0;
		int ei = a.length-1;
		int[] arr = mergeSort(a,si,ei);
		for(int i=0;i<a.length;i++) {
			System.out.println(arr[i]);
		}
	}
	
	public static int[] mergeSort(int[]a, int si, int ei) {
		
		if(si>=ei) {
			
			return a;
		}
			
		int mid = (si+ei)/2;
		

         mergeSort(a,si,mid);

		 mergeSort(a,mid+1,ei);

		return merge(a,si,ei,mid);

	}
	
	public static int[] merge(int[]a, int si, int ei, int mid) {
		int[] l = new int[mid-si+1];
		int[] r = new int[ei-mid];
		
		int l1=0;
		for(int i=si;i<=mid;i++) {
			l[l1] = a[i];
			l1++;
			
		}
		
		int r1=0;
		for(int i=mid+1;i<=ei;i++) {
			r[r1] = a[i];
			r1++;
		}
		
		int l2=0,r2=0,k=si;
		while(l2<=l.length-1 && r2<=r.length-1) {
			if(l[l2]<r[r2]) {
				a[k]=l[l2];
				k++;
				l2++;
			}
			else {
				a[k]=r[r2];
				k++;
				r2++;
			}
		}
		
		while(l2<=l.length-1) {
			a[k]=l[l2];
			k++;
			l2++;
		}
		while(r2<=r.length-1) {
			a[k]=r[r2];
			k++;
			r2++;
		}
		return a;
	}	
}
