package Recursion;

import java.util.ArrayList;
import java.util.List;

public class IsArraySorted {

	public static void main(String[] args) {
	
		List<Integer> ls = new ArrayList<Integer>();
		ls.add(3);
		ls.add(2);
		ls.add(5);
		ls.add(6);
		System.out.println("size = "+ls.size());
		boolean result_1 = isSorted_1(ls);
		System.out.println("result 1 = "+result_1);

		boolean result_2 = isSorted_2(ls,0);
		System.out.println("result 2 = "+result_2);
		
	}
	
	static boolean isSorted_1(List<Integer> ls) {
		
		if(ls.size()==0||ls.size()==1) {
			return true;
		}
		if (ls.get(0)>ls.get(1)) {
			return false;
		}
		ls.remove(0);
		return isSorted_1(ls);
	}
	
	static boolean isSorted_2(List<Integer> ls, int si) {
		
		if(si ==ls.size()-1) {
			return true;
		}
		
		if(ls.get(si)>ls.get(si+1)) {
			return false;
		}
		
		return isSorted_2(ls, si+1);
	}
}

