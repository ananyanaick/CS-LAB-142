#include <iostream>
using namespace std;

class Node
{
public:
    //Data
    int data;
    //pointer to the next node
    Node * next;
    Node * prev;
    //contruct that makes ptr to NULL
    Node()
    {
        next = NULL;
        prev= NULL;
        data = value;
    }
};
class LinkedList
{
    // Head + Circles linked with each other
    Node * head;
    Node * tail;
public:
    LinkedList()
    {
        head = NULL;
    }
    //head -->  circle type pointer
    
    //circles inside linked with each other
    //rules on how circles will be linked
    
    //insert
    void insert(int value)
    {
        //if 1st node is added
        Node * temp= new Node;
        temp->data = value;
        if (head == NULL)
        {
            head = temp;
        }
        // Any other Node only.
        else
        {
            tail->next = temp;
        }
        tail = temp;
    }
    void insertAt(int pos,int value){
        //Reach the place before the pos
        Node * current = head;
        int i = 1;
        while(i< pos){
            i++;
            current = current ->next;
        }
        temp->next = current->next;
        current->next = temp;
        temp->prev = current;
        temp->next->prev = temp;
        
    }
    void revDisplay(){
        revDisplay2(head);
        cout<< endl;
    }
    void revDisplay2(Node * current){
        //moves to next till available
        if(current == NULL) return;
        else{
            revDisplay2(current->next);
            cout<< current->data<<"->";
            
        }
        //while coming back you print
    }
    void revLL(){
        Node * temp = head;
        revLL2(head);
        tail = temp;
        temp->next = NULL;
    }
    void revLL2(Node * current){
        //condition for empty LL
        if (current==NULL ) return;
        //condition for 1 element
        else if (current->next==NULL)
        {head = current;
            return;
        }
        //reverse for rest
        else{
            //current -> next = current
            revLL2(current->next);
            current->next->next = current;
        }
    }
    //deletion
    void del(int value){
        //store tail in temp
        Node* temp = tail;
        //Node before tail has to point to NULL
        Node* current = head;
        while(current->next != tail){
            current = current->next;
            current->next->prev=NULL;
        }
        current->next = NULL;
        //update tail
        tail = current;
        //delete temp
        delete temp;
    }
    //Delete member at any position
    void deleteAt(int pos){
        // get to the position before the number to be deleted
        Node* current = head;
        int i =1;
        while(i<pos-1){
            i++;
            current = current->next;}
        current->prev->next = current->next;
        current->next->prev=current->prev;
        
    }
    //Counting the number of items in the list
    void countItems(){
        // loop to count
        int count = 0;
        Node* curr=head; while(curr != NULL){
            count++;
            curr = curr->next; }
        cout << "Number of items in list = " << count << endl;
        
    }
    
    //display
    void display()
    {
        Node * current = head;
        while(current !=NULL)
        {
            cout<<current->data<<"->";
            current = current->next;
        }
        //cout<<endl;
    }
};

int main(){
    LinkedList l1;
    l1.insert(8);
    l1.insert(9);
    l1.insert(0);
    l1.insertAt(2,7);
    l1.del(8);
    l1.deleteAt(3);
    l1.revDisplay();
    l1.display();
    l1.countItems();
    
    return 1;
}
