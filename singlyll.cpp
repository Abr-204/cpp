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
        temp=head;
        
    }
    void insertAtTail(Node* &head,Node* &tail,int d){
        Node*newNode=new Node(d);
        if(head==NULL){
        head=newNode;
        return;
        }
        Node*temp=head;
        while(temp!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;


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
    print(head);
    
    
    
}