#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int *arr;
    int qfront;
    int rear;
    int size;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        qfront=0;
        rear=0;
    }
    void enqueue(int element){
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]=element;
            rear++;
        }
    }
    int dequeue(){
        if(qfront==rear){
                return -1;
            }
        else{
                arr[qfront]=-1;
                if(qfront==rear){
                qfront=0;
                rear=0;   
                }
                return arr[qfront];
            }
    }
    int front(){
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
    bool isEmpty(){
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(12);
}
