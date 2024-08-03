#include<iostream>
#include<queue>
using namespace std;
class Circularqueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }
    bool enqueue(int element){
        if(front==0 && rear==size-1||rear==(front-1)%(size-1)){
            return false;
        }
        else if(front==-1){
            front=rear=0;
            }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=element;
        return true;
    }
    int dequeue(){
        if(front==-1){
            return -1;
        }
        arr[front]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(front=size-1){
            front=0;
        }
        else{
            front++;
        }
        return arr[front];
    }
};
int main(){
    Circularqueue cq(5);
    cq.enqueue(7);
}
        