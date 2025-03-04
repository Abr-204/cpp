#include <iostream>
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
    Node*insert(Node*root,int d){
        if(root==NULL){
            return new Node(d);
        }
        if(d>root->data){
            root->right=insert(root->right,d);
        }
        else{
            root->left=insert(root->left,d);
        }
        return root;
    }
    void takeInput(Node*&root){
        int data;
        cin>>data;
        while(data!=-1){
            root=insert(root,data);
            cin>>data;
        }
    }
    Node*search(Node*root,int x){
        if(root==NULL) return NULL;
        if(root->data==x) return root;
        if(x>root->data) search(root->right,x);
        return search(root->left,x);
    }
    Node*minval(Node*root){
        Node*temp=root;
        while(temp && temp->left!=NULL){
            temp=temp->left;
        }
        return temp;
    }
    Node*maxval(Node*root){
        Node*temp=root;
        while(temp && temp->right!=NULL){
            temp=temp->right;
        }
        return temp;
    }
    Node*deletefromBST(Node*root,int val){
        if(root==NULL) return root;
        if(root->data==val){
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            if(root->left!=NULL && root->right==NULL){
                Node*temp=root->left;
                delete root;
                return temp;
            }
            if(root->left==NULL && root->right!=NULL){
                Node*temp=root->right;
                delete root;
                return temp;
            }
            if(root->left!=NULL && root->right!=NULL){
                int maxi=maxval(root->left)->data;
                root->data=maxi;
                root->left=delete(root->left,val);
                return root;
            }

        }
        else if(val>root->data){
            delete(root->right,val);
            return root;

        }
        else delete(root->left,val);
        return root;
    }


int main()
{
    Node*root=NULL;
    takeInput(root);
    levelorder(root);
    cout<<search(root,15);
    cout<<minval(root)->data;
    cout<<maxval(root)->data;
    cout<<deletefromBST(root,5);
}