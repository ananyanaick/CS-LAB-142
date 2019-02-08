#include<iostream>
#include "class2.cpp"
using namespace std;

class Queue{
public:
    Node * top;
    LinkedList l1;
    Queue(){
        top = l1.head;
    }
    void enqueued(int value){
        l1.insert(value);
        top = l1.head;
    }
    void dequeued(){
        l1.deleteAt(l1.countItems());
        
    }
    bool isEmpty(){
        if(top==NULL) return true;
        return false;
    }
    int size(){
        return l1.countItems();
        
    }
    void Display(){
        l1.display();
    }
};
int main(){
    Queue q;
    //for(int i=0;1<5;i++)
    q.enqueued(8);
    q.enqueued(9);
    q.enqueued(7);
    q.enqueued(6);
    q.enqueued(5);
    q.enqueued(4);
    q.Display();
    cout<<endl;
    q.dequeued();
    
    q.Display();
    cout<<endl;
    
}
