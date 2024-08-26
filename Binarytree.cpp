#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
        int data;
        Node*left;
        Node*right;
        
        Node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};
    Node* buildtree(){
        int data;
        cin>>data;
        if(data==-1)    return NULL;
        Node* root= new Node(data);
        root->left=buildtree();
        root->right=buildtree();
        return root;
    }

    void levelorder(Node*root){
        if(root==NULL) return;
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node*temp=q.front();
            q.pop();
            if(temp==NULL){
                cout<<endl;
            }
            if(!q.empty()){
                q.push(NULL);
            }
            else{
                cout<<temp->data<<endl;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
    }

    // void print(Node*root){
    //     if(root==NULL)  return;
    //     print(root->left);
    //     print(root->right);
    //     cout<<root->data<<" ";
    // }
int main(){
        Node* root=buildtree();
        levelorder(root);
    }