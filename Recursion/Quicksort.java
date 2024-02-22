package Recursion;

import java.util.Arrays;

public class Quicksort {

	public static void main(String[] args) {
	
		int[] arr = {1,3,2,6,4,5};
		int si = 0, ei = arr.length-1;
		quicksort(arr, si, ei);
		System.out.println(Arrays.toString(arr));
	
	}
	
	static void quicksort(int[] arr, int si, int ei) {
		
		if(si>=ei) {
			return ;
		}
		
		int q = partition(arr, si,ei);
		 quicksort(arr,si,q-1);
		 quicksort(arr,q+1,ei);
		
	}
	
	static int partition(int[] arr, int si, int ei) {
		
		int i =  si-1;
		int pivot = arr[ei];
		
		for(int j=si; j<=ei-1;j++) {
			
			if(arr[j]<pivot) {
				swap(arr, i+1, j);
				i++;
			}
		}
		swap(arr, i+1, ei);
		return i+1;
	}
	
	static void swap(int[] arr, int i, int j) {
		
		int temp = arr[i];
		arr[i]=arr[j];
		arr[j] = temp;
		
	}
	
}
