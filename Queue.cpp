#include<stack>
#include<queue>
#include<iostream>
using namespace std;
// no iterator for stack or queue
// queue push() pop() size() empty() front() back()
int main()
{
    // stack is LIFO
    // queue if FIFO
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    while(!q.empty())
    {
        q.pop();
    }
    cout<<q.size()<<endl;
}