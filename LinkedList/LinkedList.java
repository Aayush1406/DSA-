package LinkedList;

public class LinkedList {

	public static void main(String[] args) {
		
		Node nodeAtStart = new Node();
	
		nodeAtStart.insertAtEnd(1);
		nodeAtStart.insertAtEnd(2);
		nodeAtStart.insertAtEnd(3);
		nodeAtStart.insertAtEnd(4);
//		
//		nodeAtStart.print();
//		
//		System.out.println("-------------------------");
//		
//		nodeAtStart.deleteValueAtStart();		
//		
		nodeAtStart.print();
				
		nodeAtStart.deleteValue(4);
		
		System.out.println("-------------------------");
//		
		nodeAtStart.print();
		
	}
}

class Node{
	int data;
	Node next;
	Node head;
	
	public Node() {
		
	}
	
	public Node(int data){
		this.data = data;
	}
	
	public void insertAtEnd(int data) {
		
		Node node = new Node(data);
		if(head == null) {
			head = node;
		}else {
			Node temp = head;
			while(temp.next!=null) {
				temp = temp.next;
			}			
			temp.next = node;
		}
	}
	
	public void insertAtStart(int data) {
		
		Node node = new Node(data);
		
		if(head==null) {
			head = node;
		}else {
			node.next = head;
			head = node;
		}
	}
	
	public void deleteValueAtStart() {
		
		Node temp1 = head;
		head = temp1.next;			
	}
	
	public void deleteValueAtEnd() {
		Node temp = head;
		Node buffer = head;
		while(temp.next!=null) {
		
			buffer = temp;
			temp = temp.next;
		}
		buffer.next = temp.next;
	
	}
	
	public void deleteValue(int data) {
		Node temp = head;
		Node buffer = head;
		
		while(temp.next!=null) {
				
			if(buffer.data==data) {
				head = buffer.next;
				buffer.next = null;
				break;
			}
				buffer = temp;
				temp = temp.next;
			if(temp.data==data) {
				buffer.next = temp.next;
				temp.next = null;
			}
		}
	}
	
	public void print() {	
		
		Node temp = head;
		while(temp!=null) {
			System.out.println("("+temp+") ["+temp.data+"]");
			temp = temp.next;
		}
	}
	
}
