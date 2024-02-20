package Recursion;

import java.util.ArrayList;
import java.util.List;

public class IsSorted {

	public static void main(String[] args) {
	
		List<Integer> ls = new ArrayList<Integer>();
		ls.add(1);
		ls.add(2);
		ls.add(5);
		ls.add(4);
		boolean result = isSorted(ls);
		System.out.println("result = "+result);
	}
	
	static boolean isSorted(List<Integer> ls) {
		
		if(ls.size()==0||ls.size()==1) {
			return true;
		}
		if (ls.get(0)>ls.get(1)) {
			return false;
		}
		ls.remove(0);
		return isSorted(ls);
	}
}

