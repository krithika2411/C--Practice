
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    int val;
  Node * next;
  Node(int data) {
    val = data;
    next = NULL;
  }
};

void PrintList(Node * head) // Function to print the LinkedList
{
  Node * curr = head;
  while(curr!=NULL){
      cout<<curr->val<<"-->";
      curr=curr->next;
  }
  cout<<"NULL"<<endl;
}

void InsertatFirst(int value, Node * &head) {

  // Step1 : creating a new Node with the given val
  Node * newnode = new Node(value);

  // Step2 : Making next of newly created Node to point the head of LinkedList
  newnode -> next = head;

  // Making the newly created Node as head
  head = newnode;
//   return head;
}


void InsertatEnd(int value, Node * &head ) {

  // Step1 : creating a new Node with the given val
  Node * newnode = new Node(value);
  Node* temp=head;
   while (temp->next != NULL)
   {
      temp=temp->next;
   }
   temp->next = newnode;
}



void deleteAtStart(Node* &head){
    Node* temp = head;
    head= head->next;
    free(temp);
}

void deleteAtpos(Node* &head, int pos){
    if(pos==0){
        deleteAtStart(head);
        return;
    }
    int curr_pos=0;
    Node* prev= head;
    while(curr_pos!=pos-1){
        prev=prev->next;
        curr_pos++;
    }
    Node* temp=prev->next;
    prev->next= prev->next->next;
    free(temp);
    
}

void deleteAtEnd(Node* &head){
    Node* second_last=head;
    while(second_last->next-> next!= NULL){
        second_last= second_last->next;
    }
    
    Node * temp= second_last->next;
    second_last->next=NULL;
    free(temp);
}

int main() {
  Node * head = NULL; // head of the LinkedList
  InsertatFirst(40, head);
  InsertatFirst(50, head);
  InsertatFirst(60, head);
//   head = InsertatFirst(30, head);
//   head = InsertatFirst(20, head);
//   head = InsertatFirst(10, head);
  cout << "LinkedList before inserting 0 at beginning : " << endl;
  PrintList(head);
  InsertatFirst(0, head);
  cout << "LinkedList after inserting 0 at beginning : " << endl;
  PrintList(head);
   cout << "LinkedList after inserting at ending : " << endl;
  InsertatEnd(75,head);
      PrintList(head);
    // deleteAtStart(head);
    //  PrintList(head);
    //  deleteAtEnd(head);
    //  PrintList(head);
    deleteAtpos(head, 1);
      PrintList(head);
  return 0;
}