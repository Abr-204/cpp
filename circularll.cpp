#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    
    Node *next;

    Node(int data)
    {
        this->data = data;
        
        this->next = NULL;
    }
     Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
            cout<<value<<endl;
    }
};
    void insertNode(Node* &tail,int element,int data){
        if(tail==NULL){
            Node*temp=new Node(data);
            tail=temp;
            temp=temp->next;
        }
        else{
            Node*curr=tail;
            while(curr->data!=element){
                curr=curr->next;

            }
            Node*temp=new Node(data);
            curr->next=temp->next;
            curr->next=temp;
        }

    }
    void print(Node* &tail){
        Node*temp=tail;
        do{
            cout<<tail->data<<"->";
            tail=tail->next;
        }while(tail->next!=temp);
    }

    void deleteNode(Node* &tail,int value){
        if(tail==NULL){
            cout<<"empty list"<<endl;
            return;
        }
        else{
            Node*prev=tail;
            Node*curr=prev->next;

            while (curr->data!=value){
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }
    int main(){
        Node*tail=NULL;
        insertNode(tail,2,4);
        insertNode(tail,4,7);
        insertNode(tail,7,9);
        insertNode(tail,7,10);
        deleteNode(tail,7);
        print(tail); 
    }