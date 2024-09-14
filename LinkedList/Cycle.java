package LinkedList;

public class Cycle {
	
	public static void main(String args[]) {
		
		NodeList node = new NodeList();
		node.insert(1);
		node.insert(2);
		System.out.println("head = "+node.head.next.val);
	
		
		node.print();
	}
	
}
class NodeList{
	int val;
	NodeList next;
	NodeList head;
	
	NodeList(){
		
	}
	
	public NodeList(int val){
		this.val = val;
		this.next = null;
	}
	
	public void insert(int val) {
		NodeList node = new NodeList(val);
		if(head==null) {
			head = node;
		}else {
			node.next = head;
			head = node;
		}
	}
	
	public void print() {
		NodeList tmp = head;
		
		while(tmp!=null) {
			System.out.println(tmp.val);
			tmp = tmp.next;
		}
	}
}