#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class LinkedList{

    private:
        ListNode *head;
    
    public:
        LinkedList():head(nullptr){}


        ListNode* createNode(){

            ListNode *node = new ListNode();

            return node;
        }

        void insertAtEnd(int val){
            ListNode *t = createNode();
            t->val = val;
            t->next = nullptr;

            if(head==nullptr){
                head = t;
            }else{
                ListNode *temp = head;

                while(temp->next != nullptr){
                    temp = temp->next;
                }

                temp->next = t;
            }
        }

        void printList(){
            ListNode *t = head;
            while(t->next!=nullptr){
                cout<<t->val;
                t = t->next;
            }

            cout<<t->val;
        }    
};


int main(){

    LinkedList l;

    l.insertAtEnd(1);
    l.insertAtEnd(2);
    l.insertAtEnd(3);
    l.insertAtEnd(4);

    cout<<("\n");

    l.printList();

    return 0;
}
