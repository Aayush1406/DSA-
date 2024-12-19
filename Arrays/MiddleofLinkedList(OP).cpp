class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    
    Node* h = head; 
    Node* t = head;

    if(head==NULL){
        return NULL;
    }else if(head->next == NULL){
        return head;
    }else{

        while (h!=NULL && h->next != NULL ) {

          h = h->next->next;
          t = t->next;
        }

    
        return t;
    }
}
