#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> st;
    int arr[]={10,20,30,50,60};
    st.insert(10);
    //enhanced for loop
    for(int element:st)
    cout<<element<<" ";
    cout<<endl;
    st.insert(arr,arr+4);//start and end position
    //name of vector represents start position
    //can also use v.begin(),v.end()
    for(int element:st)
    cout<<element<<" ";
    cout<<endl;
    multiset<int> st3;
    //can have multiple copies of same element 
    st.erase(st.begin());
    for(int element:st)
    cout<<element<<" ";
    cout<<endl;
    st.erase(20);//removes value if it exists it is costlly log(n) time 
    // using find
    auto it=st.begin();
    for(int element:st)
    cout<<element<<" ";
    auto st2=st.find(60);
    cout<<*st2;
    //finds iterator to 60
    //if does not exist returns end
    //multiset erase erases all elements if value is given
}