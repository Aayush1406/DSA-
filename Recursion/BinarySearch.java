package Recursion;

public class BinarySearch {

	public static void main(String[] args) {
		int[] a = {1,2,3,4,5,100,6,7,8,9,10};
		int target = 100;
		int si = 0, ei = a.length-1;
		int ans1 = binarySearchRec(a,target,si,ei);
		System.out.println("ans = "+ans1);
		
		int ans2 = binarySearchIter(a,target);
		System.out.println("ans = "+ans2);
	}
	
	static int binarySearchRec(int[] a, int target,int si,int ei) {
		
		int mid = (si + ei)/2 ;
		
		if(a[mid]==target) {
			return mid;
		}else if(target<a[mid]) {
			ei = mid-1;
			return binarySearchRec(a,target,si,ei);
		}else {
			si = mid +1;
			return binarySearchRec(a,target,si,ei);
		}
	}
	
	static int binarySearchIter(int[] a, int target) {
		
		int si = 0;
		int ei = a.length-1;
		
		while(si<=ei) {
			int mid = (si+ei)/2;
			
			if(target==a[mid]) {
				return mid;
			}else if(target>a[mid]) {
				si = mid+1;
			}else {
				ei=mid-1;
			}
		}
		return -1;
	}
}
