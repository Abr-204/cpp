#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
deque<int>d;
d.push_front(15);
d.push_back(7);
cout<<d.front()<<endl;
cout<<d.back()<<endl;
d.pop_front();
d.pop_back();
cout<<d.front()<<endl;
cout<<d.back()<<endl;
}
