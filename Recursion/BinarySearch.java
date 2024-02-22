package Recursion;

public class BinarySearch {

	public static void main(String[] args) {
		int[] a = {1,2,3,4,5,6,7,8,9,10};
		int target = 3;
		int si = 0, ei = a.length-1;
		int ans = binarySearch(a,target,si,ei);
		System.out.println("ans = "+ans);
	}
	
	static int binarySearch(int[] a, int target,int si,int ei) {
		
		int mid = (si + ei)/2 +1;
		
		if(a[mid]==target) {
			return mid;
		}else if(target<a[mid]) {
			ei = mid-1;
			return binarySearch(a,target,si,ei);
		}else {
			si = mid +1;
			return binarySearch(a,target,si,ei);
		}
	}
}
