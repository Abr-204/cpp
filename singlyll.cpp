#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

    void insertAtHead(Node* &head,Node* &tail,int d){
        
        Node*temp=new Node(d);
        temp->next=head;
        head=temp;
        if(tail==NULL){
            tail=temp;
        }
    }
    void insertAtTail(Node* &head,Node* &tail,int d){
        Node* newNode=new Node(d);
        if(tail!=NULL){
            tail->next=newNode;
            tail=tail->next;
            return;
        }
        head=newNode;
        tail=newNode;
    }
    void insertAtPosition(Node* &head,Node* &tail,int pos,int d){
        if(pos==1){
            insertAtHead(head,tail,d);
        }
        Node*temp=head;
        int cnt=1;
        while(cnt<pos-1){
            temp=temp->next;
            cnt++;
        }
        if(temp->next==NULL){
            insertAtTail(head,tail,d);
        }
        Node*newNode=new Node(d);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void deleteNode(Node* &head,int pos){
        Node*curr=head;
        Node*prev=NULL;
        if(curr==NULL) return;
        if(curr!=NULL && curr->data==pos){
            curr=curr->next;
            delete curr;
            return;
        }
        if(curr!=NULL && curr->data!=pos){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;

    }
    
    void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }

int main(){
    Node*head=NULL;
    Node*tail=NULL;
    insertAtHead(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtHead(head,tail,3);
    insertAtTail(head,tail,4);
    insertAtHead(head,tail,5);
    insertAtTail(head,tail,6);
    insertAtHead(head,tail,7);
    insertAtTail(head,tail,8);
    insertAtPosition(head,tail,5,10);
    deleteNode(head,1);
    print(head);
    
    
    
}