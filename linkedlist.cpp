#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    // Node(){
    //     int value=this->data;
    //     if(this->next!=NULL){
    //         delete next;
    //         this->next=NULL;
    //     }
    //         cout<<value<<endl;
    // }
};
void insertAtHead(Node* &head,Node* &tail, int data)
{
    if(head==NULL){
        Node*temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else{

    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}
void insertAtTail(Node* &head, Node* &tail, int data)
{
    if(tail==NULL){
        Node*temp=new Node(data);
        tail=temp;
        head=temp;
    }
    else{

    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void print(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";

        temp = temp->next;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int pos,int data){
    if(pos==1){
        insertAtHead(head,tail,data);
    }
    Node*temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;

    }
    if(temp->next==NULL){
        insertAtTail(head,tail,data);
    }
    Node*nodetoInsert=new Node(data);
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;
    temp->next->prev=nodetoInsert;
    nodetoInsert->prev=temp;
}


void deleteNode(Node* &head,int pos){
    if(pos==1){
    Node*temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;

    }
    else{
        Node*prev=NULL;
        Node*curr=head;
        int cnt=1;
        while(cnt<pos-1){

        prev=curr;
        curr=curr->next;
        cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

// int getLength(Node *head)
// {
//     int len = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

int main()
{
    Node *head = NULL;
    Node*tail=NULL;

    cout << endl;
    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 52);

    insertAtHead(head,tail, 15);
    insertAtPosition(head,tail,1,25);

    // insertAtPosition(head,tail,2,32);
    //  insertAtHead(head,55);
    // print(head);
    // cout<<endl;
    deleteNode(head,6);
     print(head);
   
    // insertAtTail(head,tail,54);
    // cout<<endl;
    // print(head);
// /}
}
