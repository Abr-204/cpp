#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(12);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    
    if(q.empty()){
        cout<<"Queue is empty"<<"";
    }
    else{
        cout<<"Not empty"<<"";
    }
    cout<<endl;
}
