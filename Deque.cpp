#include<iostream>
#include<deque>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Deque insertion at front O(1) operation.
    //Vector insertion at front O(1) operation.
    //Same goes for deletion.
    deque<string> d;
    //insertion
    d.push_back("hello");
    d.push_back("world");
    d.push_back("to");//insertion at end
    cout<<d.front()<<" "<<d.back();
    //returns first and last element respectively
    d.push_front("start");//insertion at beginning
    //pop for removal 
    d.pop_front();
    d.pop_back();
    for(int i=0;i<d.size();i++)
    {
        cout<<d.at(i);//throws exception when out of bound d[i]
        // does not check range first
    }
    // d.clear();//clears the deque
    d.insert(d.begin()+1,"new element");
    //first parameter is iterator
     for(int i=0;i<d.size();i++)
    {
        cout<<d.at(i);
    }
    d.erase(d.begin());//a element
    //[) last element is not included
    d.erase(d.begin(),d.begin()+2);//a range
    //never try to dereference end

}