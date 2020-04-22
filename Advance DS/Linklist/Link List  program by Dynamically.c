#include <iostream> 
using namespace std; 
class Node { 
   public : 
   int data; 
   Node *next; 
   Node(int data) { 
   this -> data = data; 
   next = NULL; 
} 
   void print(Node *head) { 
   //Node *temp = head; 
   while(head != NULL) { 
   cout << head -> data << " "; 
   head = head -> next; 
} 

  /* 
    temp = head; 
    while(temp != NULL) { 
    cout << temp -> data << " "; 
    temp = temp -> next; 
}*/ 
} 
}; 
int main() { 
  Node *n3 = new Node(10); 
  Node *head = n3; 
  Node *n4 = new Node(20); 
  Node *n5 = new Node(30); 
  Node *n6 = new Node(40); 
  Node *n7 = new Node(50); 
  n3 -> next = n4; 
  n4 -> next = n5; 
  n5 -> next = n6; 
  n6 -> next = n7; 
  n3->print(head); 
  return 0 ; 
} 

 
