//BST
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node*left;
    node*right;
    
    node(int value){
        
        left = NULL;
        right = NULL;
        data = value;
        
    }
    
};

class BST{
public:
    node*root;
    
    BST(){
        root = NULL;
    }
    void insertHelper(int value){
        insert(root,value);
    }
    
    void insert(node *current,int value){
        //if root is NULL , then create a node and make it the root.
        
        if (root == NULL)
            root = new node(value);
        //else decide to move left or right
        
        if (value < current->data)
            
            //if left is already null,insert new node and link it.
            
            if (current->left == NULL)
                current->left = new node(value);
        //move left and call insert there.
            else insert(current->left , value);
        
            else
                //if right is alredy null,insert new node and link it.
                if(current->right == NULL)
                    current->right = new node(value);
        
        //move right and call insert there.
                else insert(current->right,value);
    }
    void displayHelper(){
        display(root);
    }
    void display(node *current){
        //empty tree and leaf nodes children
        if ( current == NULL)
            return;
        //in order printing = print left,myself then right.
        
        //print left
        display(current->left);
        
        //print myself
        cout<<current->data << "'";
        
        //print right
        display(current->right);
        
    }
    
    node *searchHelper(int value){
        return search(root,value);
    }
    node *search(node *current, int value){
        //are you root. or are you null? if yeah,then return current.
        if ( current== NULL || current->data == value)
            return current;
        //else search left or right.
        else if(value < current->data)
        //left
              return search(current->left,value);
        //right
          else
              return search(current->right,value);
    }
};


int main(){
    BST bst1;
    
    bst1.insertHelper(1);
    bst1.insertHelper(2);
    bst1.insertHelper(3);
    bst1.insertHelper(4);
    bst1.insertHelper(5);
    bst1.displayHelper();
    if(bst1.searchHelper(3) != NULL){
     cout<<endl<< bst1.searchHelper(3)->data<<endl;
    }
    
}
