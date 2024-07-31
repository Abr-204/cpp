#include <iostream>
#include<stack>
using namespace std;
class Stack{
public:
int*arr;
int top;
int size;
Stack(int size){
    this->size=size;
    arr=new int[size];
    int top=-1;
}
void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"Stack overflow"<<endl;
    }
}
void pop(){
    if(top>=0){
        top--;
    }
    else{
         cout<<"Stack underflow"<<endl;
    }
}
int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"Empty Stack"<<endl;
        return -1;
    }
}
void empty(){
    if(top=-1){
        cout<<"Empty stack"<<"";
    }
    else{
        cout<<"Non-empty stack"<<"";
    }
    cout<<endl;
}
};




int main()
{
Stack s(5);
s.push(2);
s.push(4);
s.pop();
cout<<s.peek()<<endl;



    return 0;
}