#include <iostream>
using namespace std;

class node{

      public:
  int data;
  node* next;
node(){
  this ->data =0;
  this ->next =NULL;
   }
  
 
node (int data){
  this-> data =data;
  this ->next =NULL;
}
   
};
// i want to create a new node at the head of the linklist  
void insertAtHead(node* &head,node* &tail,int data){
  if(head == NULL){
    node* newnode = new node(data);
    head = newnode;
    tail = newnode;
    return;
  }
  // step 1
   node* newnode = new node(data);
  // attach the node with heead 
  newnode -> next = head;
  // step 3
  
    // ll -> empty list hai ab new node add hogi 
  
   head = newnode;
  
  
}
void insertAtTail(node* &head,node* &tail , int data){
  if(head == NULL){
    node* newnode = new node(data);
    head = newnode;
    tail = newnode;
    return;
  }
  // create a new node 
  node* newnode = new node(data);

  // attach node with tail
  
    tail-> next = newnode;
    
       // update the node
  tail = newnode;
  
  
  
}
void insertatposition(int data, node* &head,node* &tail,int position){
  if(head == NULL){
    node* newnode = new node(data);
    head = newnode;
    tail = newnode;
    return;
    
  }
  // step 1 find the position of previous and current node 
  int i =1;
  node* previous = head;
  while(i< position){
    previous = previous -> next ;
    i++;
    
  }
  node* current = previous -> next;
  // step 2 create a new node 
  node* newnode = new node(data);
  //step 3 new node ka next current ke equal
  newnode -> next = current ;
  previous -> next = newnode;
  
}

void print(node* head){
  node* temp = head;
  while(temp!= NULL){
    cout<< temp -> data <<" ";
    temp =temp ->next;
  }
  
}
int main(){
   node* head = NULL;
  node* tail = NULL;
  insertAtHead( head,tail,20);
    insertAtHead( head,tail,50);
    insertAtHead( head,tail,60);
    insertAtHead( head,tail,80);
  insertAtTail(head,tail,88);

  print(head);
  insertatposition(203,head,tail,2);
  cout<<endl;
  print (head);
  
}