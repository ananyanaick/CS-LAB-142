#include <iostream>
using namespace std;

class Node
{
    public:
    //Data
    int data;
    //pointer to the next node
    Node * next;

//contruct that makes ptr to NULL
    Node()
    {
        next = NULL;
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
        while(i< pos-1){
            i++;
            current = current ->next;
        }
    }
    //deletion
    void del(){
        //store tail in temp
        Node* temp = tail;
        //Node before tail has to point to NULL
        Node* current = head;
        while(current->next != tail){ current = current->next;
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
        current = current->next;
    }    //Counting the number of items in the list
        void countItems(){
    // loop to count
        int count = 0;
        Node* curr=head; while(curr != NULL){
        count++;
        curr = curr->next; }
        cout << "Number of items in list = " << count << endl; }

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
    l1.display();
    l1.countItems();

    return 0;
}
